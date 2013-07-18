/*********************************************
 *  Function for making CMSSM contour plots  *
 *********************************************/

#include "Riostream.h"
#include "TGraph.h"
#include "TGraph2D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TLegend.h"
#include <sstream>
#include <fstream>

TGraph * makeAtlas0Lep(string filename){
  //This function plots the ATLAS limit contour from tabulated data

  //Open data
  ifstream in;
  in.open(filename.c_str());
  float m0,mhf;
  float m0values[70],mhfvalues[70],dummyvalues[70];
  int entry=0;

  while (1) {
    in >> m0 >> mhf;
    if (!in.good()) break;
    if(m0!=0&&mhf!=0){
      m0values[entry]=m0;
      mhfvalues[entry]=mhf;
      dummyvalues[entry]=1;
      entry++;
    }
  }
  
  TGraph* gr = new TGraph(70,m0values, mhfvalues);
  gr->SetLineColor(1);
  gr->SetLineWidth(3);
  //gr->Draw("AL");
  
  return gr;
}



TH2F * makeMy0Lep(string channel,float systematic){
  //Thus function makes my limit from tabulated data
  //The data is made by simulating events in the m0-mhf plane
  //Read in sigma*A*eff and scale to correct luminosity
 
  //Fill a map with the ATLAS limits on the number of signla events
  map<string,float> atlasNLimits;
  atlasNLimits["Al"]=224.8;
  atlasNLimits["Am"]=33.9;
  atlasNLimits["Bm"]=43.8;
  atlasNLimits["Cl"]=65.7;
  atlasNLimits["Cm"]=17.9;
  atlasNLimits["El"]=10.4;
  atlasNLimits["Em"]=9.9;
  atlasNLimits["At"]=8.9;
  atlasNLimits["Bt"]=7.3;
  atlasNLimits["Ct"]=3.3;
  atlasNLimits["Dt"]=6.0;
  atlasNLimits["Et"]=9.3;

  ifstream in;
  ofstream out;
  ostringstream inputFile;
  //inputFile << "sigmaTimesATimesEff_cmssm_atlas0lep.txt";
  //inputFile << "sigmaTimesATimesEffStandalone.txt";
  inputFile << "sigmaTimesATimesEff.txt";
  in.open(inputFile.str().c_str());
  
  // Declaration of leaf types
  // Declaration of leaf types
  Float_t         m0;
  Float_t         mhf;
  Float_t         a0;
  Float_t         tanB;
  Float_t         sgnmu;
  Float_t         mtop;
  Float_t         sigma;
  Float_t         At,Am,Al,Bt,Bm,Ct,Cm,Cl,D,Et,Em,El;;

  float lumi=1.;//5800 (Have already accounted for lumi)
  string histString="atlasHist"+channel;
  TH2F * histAtlas=new TH2F(histString.c_str(),histString.c_str(),100,300.,3500.,100,180.,900.);

  float m0values[1000],mhfvalues[1000],atlasValues[1000];

  int entry=0;
  while (1) {
    if (!in.good()) break;
    in >> m0 >> mhf >> At >> Am >> Al >> Bt >> Bm >> Ct >> Cm >> Cl >> D >> Et >> Em >> El;
    cout << "Et " << Et << endl;
    if(channel=="At"){
      histAtlas->Fill(m0,mhf,At*lumi*systematic);
      atlasValues[entry]=At*lumi*systematic;
    }

    if(channel=="Am"){
      histAtlas->Fill(m0,mhf,Am*lumi*systematic);
      atlasValues[entry]=Am*lumi*systematic;
    }

    if(channel=="Al"){
      histAtlas->Fill(m0,mhf,Al*lumi*systematic);
      atlasValues[entry]=Al*lumi*systematic;
    }

    if(channel=="Bt"){
      histAtlas->Fill(m0,mhf,Bt*lumi*systematic);
      atlasValues[entry]=Bt*lumi*systematic;
    }

    if(channel=="Bm"){
      histAtlas->Fill(m0,mhf,Bm*lumi*systematic);
      atlasValues[entry]=Bm*lumi*systematic;
    }

    if(channel=="Ct"){
      histAtlas->Fill(m0,mhf,Ct*lumi*systematic);
      atlasValues[entry]=Ct*lumi*systematic;
    }

    if(channel=="Cm"){
      histAtlas->Fill(m0,mhf,Cm*lumi*systematic);
      atlasValues[entry]=Cm*lumi*systematic;
    }

    if(channel=="Cl"){
      histAtlas->Fill(m0,mhf,Cl*lumi*systematic);
      atlasValues[entry]=Cl*lumi*systematic;
    }

    if(channel=="Dt"){
      histAtlas->Fill(m0,mhf,D*lumi*systematic);
      atlasValues[entry]=D*lumi*systematic;
    }

    if(channel=="Et"){
      histAtlas->Fill(m0,mhf,Et*lumi*systematic);
      atlasValues[entry]=Et*lumi*systematic;
    }

    if(channel=="Em"){
      histAtlas->Fill(m0,mhf,Em*lumi*systematic);
      atlasValues[entry]=Em*lumi*systematic;
    }

    if(channel=="El"){
      histAtlas->Fill(m0,mhf,El*lumi*systematic);
      atlasValues[entry]=El*lumi*systematic;
    }

    m0values[entry]=m0;
    mhfvalues[entry]=mhf;
    entry++;
  }  

  //The following steps are the torturous ROOT code required to make a contour
  gStyle->SetPaintTextFormat("3.1f");
  //TCanvas * c1debug = new TCanvas("c1debug", "ATLAS limits", 500, 500);
  //histAtlas->Draw("text");
  string canvasString="c1"+channel;
  TCanvas * c1 = new TCanvas(canvasString.c_str(), "ATLAS limits", 500, 500);
  

  //Make a TGraph for contour plotting
  TGraph2D* gr = new TGraph2D(999, m0values, mhfvalues, atlasValues );
  string graphString="gr1"+channel;
  gr->SetName(graphString.c_str());
  //Draw the graph with Delauney interpolation (i.e. smooth the grid)
  gr->Draw("TRIW");
  //Make a histogram object from the graph
  TH2D* foo = gr->GetHistogram();
  foo->SetName("histR1");
  TH2D* h = (TH2D*)foo->Clone();
  foo->Draw("colz");
  h->SetContour(1);
  h->SetContourLevel(0,atlasNLimits[channel]);
  h->SetFillColor(2);
  h->SetLineColor(2);
  h->SetLineWidth(2);
  h->SetTitle(0);
  h->SetXTitle("m_{0}/GeV");
  h->SetYTitle("m_{1/2}/GeV");
  h->GetXaxis()->SetRangeUser(180.,3500.);
  h->GetYaxis()->SetRangeUser(300.,900.);
  h->GetYaxis()->SetTitleOffset(1.6);
  
  //Make a dummy frame
  TH2F * frame=new TH2F("frame","frame",100,180.,3500.,100,300.,900.);
  frame->SetTitle(channel.c_str());
  frame->SetXTitle("m_{0}/GeV");
  frame->SetYTitle("m_{1/2}/GeV");
  frame->Draw();
  h->Draw( "same&&cont2" );

  
  TGraph * RealR1Limit=makeAtlas0Lep("atlas"+channel+".dat");
  RealR1Limit->GetXaxis()->SetLimits(180.,3500.);
  RealR1Limit->GetYaxis()->SetRangeUser(300.,900);
  RealR1Limit->Draw("L");

  TLegend * pl = new TLegend(0.2,0.65,0.4,0.94);
  pl->SetBorderSize(0);
  pl->SetTextFont(42);
  pl->SetTextSize(0.04);
  pl->SetFillColor(0);
  pl->SetLineColor(0);
  
  pl->AddEntry(h,"Delphes","l");
  pl->AddEntry(RealR1Limit,"ATLAS","l");
  pl->Draw("same");
  
  ostringstream outFile;
  outFile << "contourR1.eps";
  //c1->SaveAs(outFile.str().c_str());
  return h;
}

