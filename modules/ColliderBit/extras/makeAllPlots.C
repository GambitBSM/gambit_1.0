

void makePlots(){

  gStyle->SetOptStat(0);
  TFile * particleIdentityFile = new TFile("SimOutputParticleIdentity.root");
  TFile * particleSmearFile = new TFile("SimOutputParticleSmear.root");
  TFile * particleDelphesFile = new TFile("SimOutputParticleDelphes.root");
  TFile * partonSmearFile = new TFile("SimOutputPartonSmear.root");
  TFile * partonIdentityFile= new TFile("SimOutputPartonIdentity.root");
  
  vector<string> histNames;
  histNames.push_back("Nelec");
  histNames.push_back("Nmuon");
  histNames.push_back("Ntau");
  histNames.push_back("MET");
  histNames.push_back("ElectronPt");
  histNames.push_back("Electron1Pt");
  histNames.push_back("Electron2Pt");
  histNames.push_back("ElectronEta");
  histNames.push_back("ElectronPhi");
  histNames.push_back("ElectronE");
  histNames.push_back("MuonPt");
  histNames.push_back("Muon1Pt");
  histNames.push_back("Muon2Pt");
  histNames.push_back("MuonEta");
  histNames.push_back("MuonPhi");
  histNames.push_back("MuonE");
  histNames.push_back("TauEta");
  histNames.push_back("TauPhi");
  histNames.push_back("TauE");
  histNames.push_back("TauPt");
  histNames.push_back("JetPt");
  histNames.push_back("JetEta");
  histNames.push_back("JetPhi");
  histNames.push_back("JetE");
  histNames.push_back("Njet30");
  histNames.push_back("Njet100");
  histNames.push_back("Njet500");
  histNames.push_back("Nbjet30");
  histNames.push_back("Nbjet100");
  histNames.push_back("Nbjet500");
  histNames.push_back("Ncentraljet30");
  histNames.push_back("Ncentraljet100");
  histNames.push_back("Ncentraljet500");
  histNames.push_back("CentralJetPt");
  histNames.push_back("CentralJetE");
  histNames.push_back("BJetPt");
  histNames.push_back("BJetE");
  histNames.push_back("BJetEta");
  histNames.push_back("BJetPhi");
  
  TCanvas c1;

  for(hist=0;hist<histNames.size();hist++){

    if(histNames[hist]=="Nelec" || histNames[hist]=="Nmuon"){
      c1.SetLogy();
    }
    else {
      c1.SetLogy(0);
    }

    TH1F * particleIdentityHist = (TH1F*)particleIdentityFile->Get(histNames[hist].c_str());
    particleIdentityHist->SetLineColor(1);
    particleIdentityHist->SetMaximum(1.2*particleIdentityHist->GetMaximum());
    particleIdentityHist->Draw();
    
    TH1F * particleDelphesHist = (TH1F*)particleDelphesFile->Get(histNames[hist].c_str());
    particleDelphesHist->SetLineColor(2);
    particleDelphesHist->Draw("same");
    
    TH1F * particleSmearHist = (TH1F*)particleSmearFile->Get(histNames[hist].c_str());
    particleSmearHist->SetLineColor(3);
    particleSmearHist->Draw("same");
    
    TH1F * partonSmearHist = (TH1F*)partonSmearFile->Get(histNames[hist].c_str());
    partonSmearHist->SetLineColor(4);
    partonSmearHist->Draw("same");
    
    TH1F * partonIdentityHist = (TH1F*)partonIdentityFile->Get(histNames[hist].c_str());
    partonIdentityHist->SetLineColor(5);
    partonIdentityHist->Draw("same");

    string outputName=histNames[hist]+"All.pdf";
    TLegend * pl = new TLegend(0.75,0.75,0.85,0.90);
    pl->AddEntry(particleIdentityHist,"PARTICLE IDENTITY");
    pl->AddEntry(particleDelphesHist,"DELPHES");
    pl->AddEntry(particleSmearHist,"PARTICLE SMEAR");
    pl->AddEntry(partonSmearHist,"PARTON SMEAR");
    pl->AddEntry(partonIdentityHist,"PARTON IDENTITY");
    pl->Draw("same");

    c1->SaveAs(outputName.c_str());
  }
  
}
