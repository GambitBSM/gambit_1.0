FSModelName = "SSDM";
FSEigenstates = SARAH`EWSB;
FSDefaultSARAHModel = SSDM;

(* input parameters *)

MINPAR = {
    {1, HiggsIN},
    {2, Lambda2Input},
    {3, Lambda3Input},
    {4, mS2Input}
};

EXTPAR = {
    {0, Qin},
    {1, QHin}
};   

EWSBOutputParameters = {Lambda1};

SUSYScale = Qin;

SUSYScaleFirstGuess = Qin;


LowScale = LowEnergyConstant[MZ];

LowScaleFirstGuess = LowEnergyConstant[MZ];

LowScaleInput = {
   {v, 2 MZDRbar / Sqrt[GUTNormalization[g1]^2 g1^2 + g2^2]},
   {Yu, Automatic},
   {Yd, Automatic},
   {Ye, Automatic},
   {mu2, HiggsIN},
   {Lambda2, Lambda2Input},
   {Lambda3, Lambda3Input},
   {mS2, mS2Input}
};

InitialGuessAtLowScale = {
   {v, LowEnergyConstant[vev]},
   {Yu, Automatic},
   {Yd, Automatic},
   {Ye, Automatic},
   {Lambda2, Lambda2Input},
   {Lambda3, Lambda3Input},
   {mS2, mS2Input}
};


SUSYScaleInput = {
   {mu2, HiggsIN}
   }

InitialGuessAtSUSYScale={
   {mu2, HiggsIN}
   }





HighScaleFirstGuess=QHin;

HighScale=QHin;

SMParticles = {
    Electron, TopQuark, BottomQuark,
    VectorP, VectorZ, VectorG, VectorW, Neutrino,
    Hp, Ah (* goldstones *)
};

OnlyLowEnergyFlexibleSUSY = False;

DefaultPoleMassPrecision = HighPrecision;
HighPoleMassPrecision    = {};
MediumPoleMassPrecision  = {};
LowPoleMassPrecision     = {};
