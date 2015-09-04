#
#                              ======================
#                              | THE SUSYHIT OUTPUT |
#                              ======================
#
#
#              ------------------------------------------------------
#              |     This is the output of the SUSY-HIT package     |
#              |  created by A.Djouadi, M.Muehlleitner and M.Spira. |
#              |  In case of problems with SUSY-HIT email to        |
#              |           margarete.muehlleitner@cern.ch           |
#              |           michael.spira@psi.ch                     |
#              |           abdelhak.djouadi@cern.ch                 |
#              ------------------------------------------------------
#
#              ------------------------------------------------------
#              |  SUSY Les Houches Accord - MSSM Spectrum + Decays  |
#              |              based on the decay programs           |
#              |                                                    |
#              |                     SDECAY 1.3b                    |
#              |                                                    |
#              |  Authors: M.Muhlleitner, A.Djouadi and Y.Mambrini  |
#              |  Ref.:    Comput.Phys.Commun.168(2005)46           |
#              |           [hep-ph/0311167]                         |
#              |                                                    |
#              |                     HDECAY 3.4                     |
#              |                                                    |
#              |  By: A.Djouadi,J.Kalinowski,M.Muhlleitner,M.Spira  |
#              |  Ref.:    Comput.Phys.Commun.108(1998)56           |
#              |           [hep-ph/9704448]                         |
#              |                                                    |
#              |                                                    |
#              |  If not stated otherwise all DRbar couplings and   |
#              |  soft SUSY breaking masses are given at the scale  |
#              |  Q=  0.81246145E+01
#              |                                                    |
#              ------------------------------------------------------
#
#
BLOCK DCINFO  # Decay Program information
     1   SDECAY/HDECAY # decay calculator
     2   1.3b  /3.4    # version number
#
BLOCK SPINFO  # Spectrum calculator information
     1   SOFTSUSY    # spectrum calculator                 
     2   3.1.6         # version number                    
#
BLOCK MODSEL  # Model selection
     1     1   #  sugra                                            
#
BLOCK SMINPUTS  # Standard Model inputs
         1     1.27934000E+02   # alpha_em^-1(M_Z)^MSbar
         2     1.16637000E-05   # G_F [GeV^-2]
         3     1.18400000E-01   # alpha_S(M_Z)^MSbar
         4     9.11876000E+01   # M_Z pole mass
         5     4.20000000E+00   # mb(mb)^MSbar
         6     1.73200000E+02   # mt pole mass
         7     1.77700000E+00   # mtau pole mass
#
BLOCK MINPAR  # Input parameters - minimal models
         1     1.00000000E+03   # m0                  
         2     2.50000000E+02   # m12                 
         3     1.00000000E+01   # tanb                
         4     1.00000000E+00   # sign(mu)            
         5     0.00000000E+00   # A0                  
#
BLOCK MASS  # Mass Spectrum
# PDG code           mass       particle
        24     8.03990662E+01   # W+
        25     1.12044702E+02   # h
        35     1.05428434E+03   # H
        36     1.05415328E+03   # A
        37     1.05746696E+03   # H+
         5     4.84088908E+00   # b-quark pole mass calculated from mb(mb)_Msbar
   1000001     1.12152929E+03   # ~d_L
   2000001     1.11394174E+03   # ~d_R
   1000002     1.11886986E+03   # ~u_L
   2000002     1.11358226E+03   # ~u_R
   1000003     1.12152929E+03   # ~s_L
   2000003     1.11394174E+03   # ~s_R
   1000004     1.11886986E+03   # ~c_L
   2000004     1.11358226E+03   # ~c_R
   1000005     9.36401306E+02   # ~b_1
   2000005     1.10530888E+03   # ~b_2
   1000006     7.14333321E+02   # ~t_1
   2000006     9.54615002E+02   # ~t_2
   1000011     1.01073541E+03   # ~e_L
   2000011     1.00398974E+03   # ~e_R
   1000012     1.00732260E+03   # ~nu_eL
   1000013     1.01073541E+03   # ~mu_L
   2000013     1.00398974E+03   # ~mu_R
   1000014     1.00732260E+03   # ~nu_muL
   1000015     9.94437807E+02   # ~tau_1
   2000015     1.00725694E+03   # ~tau_2
   1000016     1.00300092E+03   # ~nu_tauL
   1000021     6.56699608E+02   # ~g
   1000022     9.96479786E+01   # ~chi_10
   1000023     1.86217402E+02   # ~chi_20
   1000025    -3.60000911E+02   # ~chi_30
   1000035     3.79859893E+02   # ~chi_40
   1000024     1.85997672E+02   # ~chi_1+
   1000037     3.79342323E+02   # ~chi_2+
#
BLOCK NMIX  # Neutralino Mixing Matrix
  1  1     9.85234621E-01   # N_11
  1  2    -5.51692795E-02   # N_12
  1  3     1.51801666E-01   # N_13
  1  4    -5.67921321E-02   # N_14
  2  1     1.06190935E-01   # N_21
  2  2     9.37420601E-01   # N_22
  2  3    -2.85260094E-01   # N_23
  2  4     1.69094003E-01   # N_24
  3  1    -6.10874690E-02   # N_31
  3  2     9.02728766E-02   # N_32
  3  3     6.95124306E-01   # N_33
  3  4     7.10578165E-01   # N_34
  4  1    -1.19601622E-01   # N_41
  4  2     3.31737510E-01   # N_42
  4  3     6.42172198E-01   # N_43
  4  4    -6.80632459E-01   # N_44
#
BLOCK UMIX  # Chargino Mixing Matrix U
  1  1     9.10962924E-01   # U_11
  1  2    -4.12488244E-01   # U_12
  2  1     4.12488244E-01   # U_21
  2  2     9.10962924E-01   # U_22
#
BLOCK VMIX  # Chargino Mixing Matrix V
  1  1     9.68674630E-01   # V_11
  1  2    -2.48333367E-01   # V_12
  2  1     2.48333367E-01   # V_21
  2  2     9.68674630E-01   # V_22
#
BLOCK STOPMIX  # Stop Mixing Matrix
  1  1     2.06377372E-01   # cos(theta_t)
  1  2     9.78472473E-01   # sin(theta_t)
  2  1    -9.78472473E-01   # -sin(theta_t)
  2  2     2.06377372E-01   # cos(theta_t)
#
BLOCK SBOTMIX  # Sbottom Mixing Matrix
  1  1     9.99585561E-01   # cos(theta_b)
  1  2     2.87872611E-02   # sin(theta_b)
  2  1    -2.87872611E-02   # -sin(theta_b)
  2  2     9.99585561E-01   # cos(theta_b)
#
BLOCK STAUMIX  # Stau Mixing Matrix
  1  1     2.56074203E-01   # cos(theta_tau)
  1  2     9.66657128E-01   # sin(theta_tau)
  2  1    -9.66657128E-01   # -sin(theta_tau)
  2  2     2.56074203E-01   # cos(theta_tau)
#
BLOCK ALPHA  # Higgs mixing
          -1.04845249E-01   # Mixing angle in the neutral Higgs boson sector
#
BLOCK HMIX Q=  8.12461453E+00  # DRbar Higgs Parameters
         1     3.50491000E+02   # mu(Q)MSSM           
         2     9.67604379E+00   # tan                 
         3     2.43782788E+02   # higgs               
         4     1.12348769E+06   # mA^2(Q)MSSM         
#
BLOCK GAUGE Q=  8.12461453E+00  # The gauge couplings
     1     3.61703648E-01   # gprime(Q) DRbar
     2     6.44312157E-01   # g(Q) DRbar
     3     1.07757824E+00   # g3(Q) DRbar
#
BLOCK AU Q=  8.12461453E+00  # The trilinear couplings
  1  1    -5.90902194E+02   # A_u(Q) DRbar
  2  2    -5.90899642E+02   # A_c(Q) DRbar
  3  3    -4.53783299E+02   # A_t(Q) DRbar
#
BLOCK AD Q=  8.12461453E+00  # The trilinear couplings
  1  1    -7.25656526E+02   # A_d(Q) DRbar
  2  2    -7.25654144E+02   # A_s(Q) DRbar
  3  3    -6.77551690E+02   # A_b(Q) DRbar
#
BLOCK AE Q=  8.12461453E+00  # The trilinear couplings
  1  1    -1.51823457E+02   # A_e(Q) DRbar
  2  2    -1.51820687E+02   # A_mu(Q) DRbar
  3  3    -1.51007285E+02   # A_tau(Q) DRbar
#
BLOCK Yu Q=  8.12461453E+00  # The Yukawa couplings
  1  1     0.00000000E+00   # y_u(Q) DRbar
  2  2     0.00000000E+00   # y_c(Q) DRbar
  3  3     8.71586477E-01   # y_t(Q) DRbar
#
BLOCK Yd Q=  8.12461453E+00  # The Yukawa couplings
  1  1     0.00000000E+00   # y_d(Q) DRbar
  2  2     0.00000000E+00   # y_s(Q) DRbar
  3  3     1.36067900E-01   # y_b(Q) DRbar
#
BLOCK Ye Q=  8.12461453E+00  # The Yukawa couplings
  1  1     0.00000000E+00   # y_e(Q) DRbar
  2  2     0.00000000E+00   # y_mu(Q) DRbar
  3  3     9.94010625E-02   # y_tau(Q) DRbar
#
BLOCK MSOFT Q=  8.12461453E+00  # The soft SUSY breaking masses at the scale Q
         1     1.03202920E+02   # M_1(Q)              
         2     1.92995539E+02   # M_2(Q)              
         3     5.70167267E+02   # M_3(Q)              
        21     9.79393233E+05   # mH1^2(Q)            
        22    -1.02321955E+05   # mH2^2(Q)            
        31     1.00827771E+03   # meL(Q)              
        32     1.00826341E+03   # mmuL(Q)             
        33     1.00405537E+03   # mtauL(Q)            
        34     1.00204938E+03   # meR(Q)              
        35     1.00202048E+03   # mmuR(Q)             
        36     9.93496405E+02   # mtauR(Q)            
        41     1.10363897E+03   # mqL1(Q)             
        42     1.10363442E+03   # mqL2(Q)             
        43     9.23234893E+02   # mqL3(Q)             
        44     1.09886943E+03   # muR(Q)              
        45     1.09886458E+03   # mcR(Q)              
        46     6.96252992E+02   # mtR(Q)              
        47     1.09840160E+03   # mdR(Q)              
        48     1.09839725E+03   # msR(Q)              
        49     1.08988331E+03   # mbR(Q)              
#
#
#
#                             =================
#                             |The decay table|
#                             =================
#
# - The QCD corrections to the decays gluino -> squark  + quark
#                                     squark -> gaugino + quark_prime
#                                     squark -> squark_prime + Higgs
#                                     squark -> gluino  + quark
#   are included.
#
# - The multi-body decays for the inos, stops and sbottoms are included.
#
# - The loop induced decays for the gluino, neutralinos and stops
#   are included.
#
# - The SUSY decays of the top quark are included.
#
#
#         PDG            Width
DECAY         6     1.46163917E+00   # top decays
#          BR         NDA      ID1       ID2
     1.00000000E+00    2           5        24   # BR(t ->  b    W+)
#
#         PDG            Width
DECAY   1000021     4.56047224E-03   # gluino decays
#          BR         NDA      ID1       ID2
     9.63176572E-05    2     1000022        21   # BR(~g -> ~chi_10 g)
     3.63879242E-03    2     1000023        21   # BR(~g -> ~chi_20 g)
     2.01487517E-02    2     1000025        21   # BR(~g -> ~chi_30 g)
     1.63129838E-02    2     1000035        21   # BR(~g -> ~chi_40 g)
#           BR         NDA      ID1       ID2       ID3
     1.21016618E-02    3     1000022         1        -1   # BR(~g -> ~chi_10 d  db)
     3.88066743E-02    3     1000023         1        -1   # BR(~g -> ~chi_20 d  db)
     4.52369937E-05    3     1000025         1        -1   # BR(~g -> ~chi_30 d  db)
     1.07198613E-03    3     1000035         1        -1   # BR(~g -> ~chi_40 d  db)
     3.54488608E-02    3     1000022         2        -2   # BR(~g -> ~chi_10 u  ub)
     4.29442722E-02    3     1000023         2        -2   # BR(~g -> ~chi_20 u  ub)
     3.51726116E-05    3     1000025         2        -2   # BR(~g -> ~chi_30 u  ub)
     8.84618000E-04    3     1000035         2        -2   # BR(~g -> ~chi_40 u  ub)
     1.21016618E-02    3     1000022         3        -3   # BR(~g -> ~chi_10 s  sb)
     3.88066743E-02    3     1000023         3        -3   # BR(~g -> ~chi_20 s  sb)
     4.52369937E-05    3     1000025         3        -3   # BR(~g -> ~chi_30 s  sb)
     1.07198613E-03    3     1000035         3        -3   # BR(~g -> ~chi_40 s  sb)
     3.54488608E-02    3     1000022         4        -4   # BR(~g -> ~chi_10 c  cb)
     4.29442722E-02    3     1000023         4        -4   # BR(~g -> ~chi_20 c  cb)
     3.51726116E-05    3     1000025         4        -4   # BR(~g -> ~chi_30 c  cb)
     8.84618000E-04    3     1000035         4        -4   # BR(~g -> ~chi_40 c  cb)
     1.78816097E-02    3     1000022         5        -5   # BR(~g -> ~chi_10 b  bb)
     9.70500213E-02    3     1000023         5        -5   # BR(~g -> ~chi_20 b  bb)
     1.89829304E-03    3     1000025         5        -5   # BR(~g -> ~chi_30 b  bb)
     4.13057714E-03    3     1000035         5        -5   # BR(~g -> ~chi_40 b  bb)
     4.91641742E-02    3     1000022         6        -6   # BR(~g -> ~chi_10 t  tb)
     6.66232758E-03    3     1000023         6        -6   # BR(~g -> ~chi_20 t  tb)
     8.18823695E-02    3     1000024         1        -2   # BR(~g -> ~chi_1+ d  ub)
     8.18823695E-02    3    -1000024         2        -1   # BR(~g -> ~chi_1- u  db)
     1.89964291E-03    3     1000037         1        -2   # BR(~g -> ~chi_2+ d  ub)
     1.89964291E-03    3    -1000037         2        -1   # BR(~g -> ~chi_2- u  db)
     8.18823695E-02    3     1000024         3        -4   # BR(~g -> ~chi_1+ s  cb)
     8.18823695E-02    3    -1000024         4        -3   # BR(~g -> ~chi_1- c  sb)
     1.89964291E-03    3     1000037         3        -4   # BR(~g -> ~chi_2+ s  cb)
     1.89964291E-03    3    -1000037         4        -3   # BR(~g -> ~chi_2- c  sb)
     6.62745679E-02    3     1000024         5        -6   # BR(~g -> ~chi_1+ b  tb)
     6.62745679E-02    3    -1000024         6        -5   # BR(~g -> ~chi_1- t  bb)
     2.63310001E-02    3     1000037         5        -6   # BR(~g -> ~chi_2+ b  tb)
     2.63310001E-02    3    -1000037         6        -5   # BR(~g -> ~chi_2- t  bb)
#
#         PDG            Width
DECAY   1000006     8.14661790E+00   # stop1 decays
#          BR         NDA      ID1       ID2
     1.65034760E-01    2     1000022         6   # BR(~t_1 -> ~chi_10 t )
     3.10509377E-02    2     1000023         6   # BR(~t_1 -> ~chi_20 t )
     2.01190334E-01    2     1000025         6   # BR(~t_1 -> ~chi_30 t )
     1.49841109E-01    2     1000035         6   # BR(~t_1 -> ~chi_40 t )
     6.76494693E-02    2     1000024         5   # BR(~t_1 -> ~chi_1+ b )
     3.85233390E-01    2     1000037         5   # BR(~t_1 -> ~chi_2+ b )
#
#         PDG            Width
DECAY   2000006     2.75538185E+01   # stop2 decays
#          BR         NDA      ID1       ID2
     1.91285803E-03    2     1000022         6   # BR(~t_2 -> ~chi_10 t )
     1.07504959E-01    2     1000023         6   # BR(~t_2 -> ~chi_20 t )
     1.11459319E-01    2     1000025         6   # BR(~t_2 -> ~chi_30 t )
     1.24006343E-01    2     1000035         6   # BR(~t_2 -> ~chi_40 t )
     2.26024436E-01    2     1000024         5   # BR(~t_2 -> ~chi_1+ b )
     1.88044936E-02    2     1000037         5   # BR(~t_2 -> ~chi_2+ b )
     3.79433200E-01    2     1000021         6   # BR(~t_2 -> ~g      t )
     9.77438267E-04    2     1000006        25   # BR(~t_2 -> ~t_1    h )
     2.98769530E-02    2     1000006        23   # BR(~t_2 -> ~t_1    Z )
#
#         PDG            Width
DECAY   1000005     2.98211784E+01   # sbottom1 decays
#          BR         NDA      ID1       ID2
     7.18089292E-03    2     1000022         5   # BR(~b_1 -> ~chi_10 b )
     9.67464301E-02    2     1000023         5   # BR(~b_1 -> ~chi_20 b )
     3.27601103E-03    2     1000025         5   # BR(~b_1 -> ~chi_30 b )
     1.26941011E-02    2     1000035         5   # BR(~b_1 -> ~chi_40 b )
     1.85893757E-01    2    -1000024         6   # BR(~b_1 -> ~chi_1- t )
     2.31140054E-01    2    -1000037         6   # BR(~b_1 -> ~chi_2- t )
     4.13382863E-01    2     1000021         5   # BR(~b_1 -> ~g      b )
     4.96858906E-02    2     1000006       -24   # BR(~b_1 -> ~t_1    W-)
#
#         PDG            Width
DECAY   2000005     2.29227458E+01   # sbottom2 decays
#          BR         NDA      ID1       ID2
     2.55551635E-02    2     1000022         5   # BR(~b_2 -> ~chi_10 b )
     7.68680728E-04    2     1000023         5   # BR(~b_2 -> ~chi_20 b )
     4.43128270E-03    2     1000025         5   # BR(~b_2 -> ~chi_30 b )
     4.17537129E-03    2     1000035         5   # BR(~b_2 -> ~chi_40 b )
     9.62949153E-04    2    -1000024         6   # BR(~b_2 -> ~chi_1- t )
     7.64114024E-03    2    -1000037         6   # BR(~b_2 -> ~chi_2- t )
     9.55449990E-01    2     1000021         5   # BR(~b_2 -> ~g      b )
     1.49225718E-04    2     1000005        25   # BR(~b_2 -> ~b_1    h )
     2.60821128E-04    2     1000005        23   # BR(~b_2 -> ~b_1    Z )
     2.72505844E-04    2     1000006       -24   # BR(~b_2 -> ~t_1    W-)
     3.32869502E-04    2     2000006       -24   # BR(~b_2 -> ~t_2    W-)
#
#         PDG            Width
DECAY   1000002     3.53231300E+01   # sup_L decays
#          BR         NDA      ID1       ID2
     2.06213874E-03    2     1000022         2   # BR(~u_L -> ~chi_10 u)
     1.09491227E-01    2     1000023         2   # BR(~u_L -> ~chi_20 u)
     6.42455113E-04    2     1000025         2   # BR(~u_L -> ~chi_30 u)
     9.65651823E-03    2     1000035         2   # BR(~u_L -> ~chi_40 u)
     2.24247030E-01    2     1000024         1   # BR(~u_L -> ~chi_1+ d)
     1.24532368E-02    2     1000037         1   # BR(~u_L -> ~chi_2+ d)
     6.41447393E-01    2     1000021         2   # BR(~u_L -> ~g      u)
#
#         PDG            Width
DECAY   2000002     2.47497839E+01   # sup_R decays
#          BR         NDA      ID1       ID2
     9.54160331E-02    2     1000022         2   # BR(~u_R -> ~chi_10 u)
     1.07159272E-03    2     1000023         2   # BR(~u_R -> ~chi_20 u)
     3.06295747E-04    2     1000025         2   # BR(~u_R -> ~chi_30 u)
     1.14595848E-03    2     1000035         2   # BR(~u_R -> ~chi_40 u)
     9.02060120E-01    2     1000021         2   # BR(~u_R -> ~g      u)
#
#         PDG            Width
DECAY   1000001     3.53671093E+01   # sdown_L decays
#          BR         NDA      ID1       ID2
     7.09753187E-03    2     1000022         1   # BR(~d_L -> ~chi_10 d)
     1.00732165E-01    2     1000023         1   # BR(~d_L -> ~chi_20 d)
     1.07139778E-03    2     1000025         1   # BR(~d_L -> ~chi_30 d)
     1.26823220E-02    2     1000035         1   # BR(~d_L -> ~chi_40 d)
     1.98605146E-01    2    -1000024         2   # BR(~d_L -> ~chi_1- u)
     3.44377782E-02    2    -1000037         2   # BR(~d_L -> ~chi_2- u)
     6.45373659E-01    2     1000021         1   # BR(~d_L -> ~g      d)
#
#         PDG            Width
DECAY   2000001     2.29545767E+01   # sdown_R decays
#          BR         NDA      ID1       ID2
     2.57283085E-02    2     1000022         1   # BR(~d_R -> ~chi_10 d)
     2.88954620E-04    2     1000023         1   # BR(~d_R -> ~chi_20 d)
     8.26011076E-05    2     1000025         1   # BR(~d_R -> ~chi_30 d)
     3.09044869E-04    2     1000035         1   # BR(~d_R -> ~chi_40 d)
     9.73591091E-01    2     1000021         1   # BR(~d_R -> ~g      d)
#
#         PDG            Width
DECAY   1000004     3.53231300E+01   # scharm_L decays
#          BR         NDA      ID1       ID2
     2.06213874E-03    2     1000022         4   # BR(~c_L -> ~chi_10 c)
     1.09491227E-01    2     1000023         4   # BR(~c_L -> ~chi_20 c)
     6.42455113E-04    2     1000025         4   # BR(~c_L -> ~chi_30 c)
     9.65651823E-03    2     1000035         4   # BR(~c_L -> ~chi_40 c)
     2.24247030E-01    2     1000024         3   # BR(~c_L -> ~chi_1+ s)
     1.24532368E-02    2     1000037         3   # BR(~c_L -> ~chi_2+ s)
     6.41447393E-01    2     1000021         4   # BR(~c_L -> ~g      c)
#
#         PDG            Width
DECAY   2000004     2.47497839E+01   # scharm_R decays
#          BR         NDA      ID1       ID2
     9.54160331E-02    2     1000022         4   # BR(~c_R -> ~chi_10 c)
     1.07159272E-03    2     1000023         4   # BR(~c_R -> ~chi_20 c)
     3.06295747E-04    2     1000025         4   # BR(~c_R -> ~chi_30 c)
     1.14595848E-03    2     1000035         4   # BR(~c_R -> ~chi_40 c)
     9.02060120E-01    2     1000021         4   # BR(~c_R -> ~g      c)
#
#         PDG            Width
DECAY   1000003     3.53671093E+01   # sstrange_L decays
#          BR         NDA      ID1       ID2
     7.09753187E-03    2     1000022         3   # BR(~s_L -> ~chi_10 s)
     1.00732165E-01    2     1000023         3   # BR(~s_L -> ~chi_20 s)
     1.07139778E-03    2     1000025         3   # BR(~s_L -> ~chi_30 s)
     1.26823220E-02    2     1000035         3   # BR(~s_L -> ~chi_40 s)
     1.98605146E-01    2    -1000024         4   # BR(~s_L -> ~chi_1- c)
     3.44377782E-02    2    -1000037         4   # BR(~s_L -> ~chi_2- c)
     6.45373659E-01    2     1000021         3   # BR(~s_L -> ~g      s)
#
#         PDG            Width
DECAY   2000003     2.29545767E+01   # sstrange_R decays
#          BR         NDA      ID1       ID2
     2.57283085E-02    2     1000022         3   # BR(~s_R -> ~chi_10 s)
     2.88954620E-04    2     1000023         3   # BR(~s_R -> ~chi_20 s)
     8.26011076E-05    2     1000025         3   # BR(~s_R -> ~chi_30 s)
     3.09044869E-04    2     1000035         3   # BR(~s_R -> ~chi_40 s)
     9.73591091E-01    2     1000021         3   # BR(~s_R -> ~g      s)
#
#         PDG            Width
DECAY   1000011     1.26268050E+01   # selectron_L decays
#          BR         NDA      ID1       ID2
     8.03663491E-02    2     1000022        11   # BR(~e_L -> ~chi_10 e-)
     3.06662861E-01    2     1000023        11   # BR(~e_L -> ~chi_20 e-)
     7.89700333E-04    2     1000025        11   # BR(~e_L -> ~chi_30 e-)
     1.70663643E-02    2     1000035        11   # BR(~e_L -> ~chi_40 e-)
     5.12088012E-01    2    -1000024        12   # BR(~e_L -> ~chi_1- nu_e)
     8.30267135E-02    2    -1000037        12   # BR(~e_L -> ~chi_2- nu_e)
#
#         PDG            Width
DECAY   2000011     5.09830302E+00   # selectron_R decays
#          BR         NDA      ID1       ID2
     9.75551091E-01    2     1000022        11   # BR(~e_R -> ~chi_10 e-)
     1.07779775E-02    2     1000023        11   # BR(~e_R -> ~chi_20 e-)
     2.90493330E-03    2     1000025        11   # BR(~e_R -> ~chi_30 e-)
     1.07659980E-02    2     1000035        11   # BR(~e_R -> ~chi_40 e-)
#
#         PDG            Width
DECAY   1000013     1.26268050E+01   # smuon_L decays
#          BR         NDA      ID1       ID2
     8.03663491E-02    2     1000022        13   # BR(~mu_L -> ~chi_10 mu-)
     3.06662861E-01    2     1000023        13   # BR(~mu_L -> ~chi_20 mu-)
     7.89700333E-04    2     1000025        13   # BR(~mu_L -> ~chi_30 mu-)
     1.70663643E-02    2     1000035        13   # BR(~mu_L -> ~chi_40 mu-)
     5.12088012E-01    2    -1000024        14   # BR(~mu_L -> ~chi_1- nu_mu)
     8.30267135E-02    2    -1000037        14   # BR(~mu_L -> ~chi_2- nu_mu)
#
#         PDG            Width
DECAY   2000013     5.09830302E+00   # smuon_R decays
#          BR         NDA      ID1       ID2
     9.75551091E-01    2     1000022        13   # BR(~mu_R -> ~chi_10 mu-)
     1.07779775E-02    2     1000023        13   # BR(~mu_R -> ~chi_20 mu-)
     2.90493330E-03    2     1000025        13   # BR(~mu_R -> ~chi_30 mu-)
     1.07659980E-02    2     1000035        13   # BR(~mu_R -> ~chi_40 mu-)
#
#         PDG            Width
DECAY   1000015     5.89708024E+00   # stau_1 decays
#          BR         NDA      ID1       ID2
     7.99001552E-01    2     1000022        15   # BR(~tau_1 -> ~chi_10  tau-)
     7.09531235E-02    2     1000023        15   # BR(~tau_1 -> ~chi_20  tau-)
     9.58963110E-03    2     1000025        15   # BR(~tau_1 -> ~chi_30  tau-)
     6.81864662E-03    2     1000035        15   # BR(~tau_1 -> ~chi_40  tau-)
     1.12708071E-01    2    -1000024        16   # BR(~tau_1 -> ~chi_1-  nu_tau)
     9.28975428E-04    2    -1000037        16   # BR(~tau_1 -> ~chi_2-  nu_tau)
#
#         PDG            Width
DECAY   2000015     1.21697706E+01   # stau_2 decays
#          BR         NDA      ID1       ID2
     1.01523551E-01    2     1000022        15   # BR(~tau_2 -> ~chi_10  tau-)
     2.89018087E-01    2     1000023        15   # BR(~tau_2 -> ~chi_20  tau-)
     9.24341703E-03    2     1000025        15   # BR(~tau_2 -> ~chi_30  tau-)
     2.86818007E-02    2     1000035        15   # BR(~tau_2 -> ~chi_40  tau-)
     4.76396476E-01    2    -1000024        16   # BR(~tau_2 -> ~chi_1-  nu_tau)
     9.51366684E-02    2    -1000037        16   # BR(~tau_2 -> ~chi_2-  nu_tau)
#
#         PDG            Width
DECAY   1000012     1.26959880E+01   # snu_eL decays
#          BR         NDA      ID1       ID2
     1.18858804E-01    2     1000022        12   # BR(~nu_eL -> ~chi_10 nu_e)
     2.35499716E-01    2     1000023        12   # BR(~nu_eL -> ~chi_20 nu_e)
     3.86815075E-03    2     1000025        12   # BR(~nu_eL -> ~chi_30 nu_e)
     3.83571950E-02    2     1000035        12   # BR(~nu_eL -> ~chi_40 nu_e)
     5.73654568E-01    2     1000024        11   # BR(~nu_eL -> ~chi_1+ e-)
     2.97615660E-02    2     1000037        11   # BR(~nu_eL -> ~chi_2+ e-)
#
#         PDG            Width
DECAY   1000014     1.26959880E+01   # snu_muL decays
#          BR         NDA      ID1       ID2
     1.18858804E-01    2     1000022        14   # BR(~nu_muL -> ~chi_10 nu_mu)
     2.35499716E-01    2     1000023        14   # BR(~nu_muL -> ~chi_20 nu_mu)
     3.86815075E-03    2     1000025        14   # BR(~nu_muL -> ~chi_30 nu_mu)
     3.83571950E-02    2     1000035        14   # BR(~nu_muL -> ~chi_40 nu_mu)
     5.73654568E-01    2     1000024        13   # BR(~nu_muL -> ~chi_1+ mu-)
     2.97615660E-02    2     1000037        13   # BR(~nu_muL -> ~chi_2+ mu-)
#
#         PDG            Width
DECAY   1000016     1.27838328E+01   # snu_tauL decays
#          BR         NDA      ID1       ID2
     1.17515567E-01    2     1000022        16   # BR(~nu_tauL -> ~chi_10 nu_tau)
     2.32735751E-01    2     1000023        16   # BR(~nu_tauL -> ~chi_20 nu_tau)
     3.81542139E-03    2     1000025        16   # BR(~nu_tauL -> ~chi_30 nu_tau)
     3.78216610E-02    2     1000035        16   # BR(~nu_tauL -> ~chi_40 nu_tau)
     5.69314841E-01    2     1000024        15   # BR(~nu_tauL -> ~chi_1+ tau-)
     3.87967586E-02    2     1000037        15   # BR(~nu_tauL -> ~chi_2+ tau-)
#
#         PDG            Width
DECAY   1000024     1.63853299E-03   # chargino1+ decays
#          BR         NDA      ID1       ID2
     1.00000000E+00    2     1000022        24   # BR(~chi_1+ -> ~chi_10  W+)
#
#         PDG            Width
DECAY   1000037     1.81358934E+00   # chargino2+ decays
#          BR         NDA      ID1       ID2
     3.15326204E-01    2     1000024        23   # BR(~chi_2+ -> ~chi_1+  Z )
     9.19024291E-02    2     1000022        24   # BR(~chi_2+ -> ~chi_10  W+)
     3.69914053E-01    2     1000023        24   # BR(~chi_2+ -> ~chi_20  W+)
     2.22857314E-01    2     1000024        25   # BR(~chi_2+ -> ~chi_1+  h )
#
#         PDG            Width
DECAY   1000022     0.00000000E+00   # neutralino1 decays
#
#         PDG            Width
DECAY   1000023     4.97673584E-05   # neutralino2 decays
#          BR         NDA      ID1       ID2
     2.90289275E-04    2     1000022        22   # BR(~chi_20 -> ~chi_10 gam)
#           BR         NDA      ID1       ID2       ID3
     1.20001867E-01    3     1000022        -2         2   # BR(~chi_20 -> ~chi_10 ub      u)
     1.56335270E-01    3     1000022        -1         1   # BR(~chi_20 -> ~chi_10 db      d)
     1.20001867E-01    3     1000022        -4         4   # BR(~chi_20 -> ~chi_10 cb      c)
     1.56335270E-01    3     1000022        -3         3   # BR(~chi_20 -> ~chi_10 sb      s)
     1.55286191E-01    3     1000022        -5         5   # BR(~chi_20 -> ~chi_10 bb      b)
     3.21902568E-02    3     1000022       -11        11   # BR(~chi_20 -> ~chi_10 e+      e-)
     3.21902568E-02    3     1000022       -13        13   # BR(~chi_20 -> ~chi_10 mu+     mu-)
     3.21577818E-02    3     1000022       -15        15   # BR(~chi_20 -> ~chi_10 tau+    tau-)
     6.50830408E-02    3     1000022       -12        12   # BR(~chi_20 -> ~chi_10 nu_eb   nu_e)
     6.50830408E-02    3     1000022       -14        14   # BR(~chi_20 -> ~chi_10 nu_mub  nu_mu)
     6.50448688E-02    3     1000022       -16        16   # BR(~chi_20 -> ~chi_10 nu_taub nu_tau)
     1.50880864E-11    3     1000024        -2         1   # BR(~chi_20 -> ~chi_1+ ub      d)
     1.50880864E-11    3    -1000024        -1         2   # BR(~chi_20 -> ~chi_1- db      u)
     1.50880864E-11    3     1000024        -4         3   # BR(~chi_20 -> ~chi_1+ cb      s)
     1.50880864E-11    3    -1000024        -3         4   # BR(~chi_20 -> ~chi_1- sb      c)
     5.03528951E-12    3     1000024       -12        11   # BR(~chi_20 -> ~chi_1+ nu_eb   e-)
     5.03528951E-12    3    -1000024        12       -11   # BR(~chi_20 -> ~chi_1- nu_e    e+)
     5.03528951E-12    3     1000024       -14        13   # BR(~chi_20 -> ~chi_1+ nu_mub  mu-)
     5.03528951E-12    3    -1000024        14       -13   # BR(~chi_20 -> ~chi_1- nu_mu   mu+)
#
#         PDG            Width
DECAY   1000025     1.72687675E+00   # neutralino3 decays
#          BR         NDA      ID1       ID2
     1.28427698E-01    2     1000022        23   # BR(~chi_30 -> ~chi_10   Z )
     2.25744839E-01    2     1000023        23   # BR(~chi_30 -> ~chi_20   Z )
     3.05946231E-01    2     1000024       -24   # BR(~chi_30 -> ~chi_1+   W-)
     3.05946231E-01    2    -1000024        24   # BR(~chi_30 -> ~chi_1-   W+)
     2.30889972E-02    2     1000022        25   # BR(~chi_30 -> ~chi_10   h )
     1.08460029E-02    2     1000023        25   # BR(~chi_30 -> ~chi_20   h )
#
#         PDG            Width
DECAY   1000035     1.94540143E+00   # neutralino4 decays
#          BR         NDA      ID1       ID2
     2.78761949E-02    2     1000022        23   # BR(~chi_40 -> ~chi_10   Z )
     2.28980557E-02    2     1000023        23   # BR(~chi_40 -> ~chi_20   Z )
     3.43236339E-01    2     1000024       -24   # BR(~chi_40 -> ~chi_1+   W-)
     3.43236339E-01    2    -1000024        24   # BR(~chi_40 -> ~chi_1-   W+)
     9.05003380E-02    2     1000022        25   # BR(~chi_40 -> ~chi_10   h )
     1.72252734E-01    2     1000023        25   # BR(~chi_40 -> ~chi_20   h )
#
#         PDG            Width
DECAY        25     3.07577183E-03   # h decays
#          BR         NDA      ID1       ID2
     7.64129418E-01    2           5        -5   # BR(h -> b       bb     )
     7.81237445E-02    2         -15        15   # BR(h -> tau+    tau-   )
     2.76611104E-04    2         -13        13   # BR(h -> mu+     mu-    )
     5.58167798E-04    2           3        -3   # BR(h -> s       sb     )
     2.34871885E-02    2           4        -4   # BR(h -> c       cb     )
     6.89379892E-02    2          21        21   # BR(h -> g       g      )
     1.99472612E-03    2          22        22   # BR(h -> gam     gam    )
     4.86933946E-04    2          22        23   # BR(h -> Z       gam    )
     5.65851689E-02    2          24       -24   # BR(h -> W+      W-     )
     5.42005172E-03    2          23        23   # BR(h -> Z       Z      )
#
#         PDG            Width
DECAY        35     1.28167416E+01   # H decays
#          BR         NDA      ID1       ID2
     1.00097795E-01    2           5        -5   # BR(H -> b       bb     )
     1.59546017E-02    2         -15        15   # BR(H -> tau+    tau-   )
     5.64061499E-05    2         -13        13   # BR(H -> mu+     mu-    )
     7.43612257E-05    2           3        -3   # BR(H -> s       sb     )
     3.94102446E-07    2           4        -4   # BR(H -> c       cb     )
     3.87051215E-02    2           6        -6   # BR(H -> t       tb     )
     4.66353373E-05    2          21        21   # BR(H -> g       g      )
     1.04328300E-06    2          22        22   # BR(H -> gam     gam    )
     5.13216431E-08    2          23        22   # BR(H -> Z       gam    )
     1.00547624E-04    2          24       -24   # BR(H -> W+      W-     )
     4.97741231E-05    2          23        23   # BR(H -> Z       Z      )
     4.05111128E-04    2          25        25   # BR(H -> h       h      )
    -7.93067600E-23    2          36        36   # BR(H -> A       A      )
     3.48783013E-18    2          23        36   # BR(H -> Z       A      )
     7.98456323E-02    2     1000024  -1000024   # BR(H -> ~chi_1+ ~chi_1-)
     7.83922973E-03    2     1000037  -1000037   # BR(H -> ~chi_2+ ~chi_2-)
     2.13649717E-01    2     1000024  -1000037   # BR(H -> ~chi_1+ ~chi_2-)
     2.13649717E-01    2     1000037  -1000024   # BR(H -> ~chi_2+ ~chi_1-)
     4.71481679E-03    2     1000022   1000022   # BR(H -> ~chi_10 ~chi_10)
     3.13542353E-02    2     1000023   1000023   # BR(H -> ~chi_20 ~chi_20)
     2.41153893E-03    2     1000025   1000025   # BR(H -> ~chi_30 ~chi_30)
     1.17301798E-02    2     1000035   1000035   # BR(H -> ~chi_40 ~chi_40)
     2.47747348E-02    2     1000022   1000023   # BR(H -> ~chi_10 ~chi_20)
     5.23750422E-02    2     1000022   1000025   # BR(H -> ~chi_10 ~chi_30)
     1.77208185E-02    2     1000022   1000035   # BR(H -> ~chi_10 ~chi_40)
     1.17875213E-01    2     1000023   1000025   # BR(H -> ~chi_20 ~chi_30)
     3.20373740E-02    2     1000023   1000035   # BR(H -> ~chi_20 ~chi_40)
     3.45299076E-02    2     1000025   1000035   # BR(H -> ~chi_30 ~chi_40)
#
#         PDG            Width
DECAY        36     1.28161318E+01   # A decays
#          BR         NDA      ID1       ID2
     1.00162572E-01    2           5        -5   # BR(A -> b       bb     )
     1.59597586E-02    2         -15        15   # BR(A -> tau+    tau-   )
     5.64237427E-05    2         -13        13   # BR(A -> mu+     mu-    )
     7.44393944E-05    2           3        -3   # BR(A -> s       sb     )
     3.83766646E-07    2           4        -4   # BR(A -> c       cb     )
     4.06464962E-02    2           6        -6   # BR(A -> t       tb     )
     1.12103317E-04    2          21        21   # BR(A -> g       g      )
     1.41406441E-07    2          22        22   # BR(A -> gam     gam    )
     1.00330739E-07    2          23        22   # BR(A -> Z       gam    )
     9.82772823E-05    2          23        25   # BR(A -> Z       h      )
     1.15576176E-01    2     1000024  -1000024   # BR(A -> ~chi_1+ ~chi_1-)
     3.43091733E-02    2     1000037  -1000037   # BR(A -> ~chi_2+ ~chi_2-)
     1.82086136E-01    2     1000024  -1000037   # BR(A -> ~chi_1+ ~chi_2-)
     1.82086136E-01    2     1000037  -1000024   # BR(A -> ~chi_2+ ~chi_1-)
     5.71793192E-03    2     1000022   1000022   # BR(A -> ~chi_10 ~chi_10)
     4.59094227E-02    2     1000023   1000023   # BR(A -> ~chi_20 ~chi_20)
     2.94738655E-03    2     1000025   1000025   # BR(A -> ~chi_30 ~chi_30)
     3.80610233E-02    2     1000035   1000035   # BR(A -> ~chi_40 ~chi_40)
     3.26751269E-02    2     1000022   1000023   # BR(A -> ~chi_10 ~chi_20)
     2.86358748E-02    2     1000022   1000025   # BR(A -> ~chi_10 ~chi_30)
     3.42442115E-02    2     1000022   1000035   # BR(A -> ~chi_10 ~chi_40)
     5.54656425E-02    2     1000023   1000025   # BR(A -> ~chi_20 ~chi_30)
     7.12865253E-02    2     1000023   1000035   # BR(A -> ~chi_20 ~chi_40)
     1.38885363E-02    2     1000025   1000035   # BR(A -> ~chi_30 ~chi_40)
#
#         PDG            Width
DECAY        37     1.26726991E+01   # H+ decays
#          BR         NDA      ID1       ID2
     1.54415726E-04    2           4        -5   # BR(H+ -> c       bb     )
     1.61911320E-02    2         -15        16   # BR(H+ -> tau+    nu_tau )
     5.72417328E-05    2         -13        14   # BR(H+ -> mu+     nu_mu  )
     9.88248149E-07    2           2        -5   # BR(H+ -> u       bb     )
     3.59688434E-06    2           2        -3   # BR(H+ -> u       sb     )
     7.43508865E-05    2           4        -3   # BR(H+ -> c       sb     )
     1.34782107E-01    2           6        -5   # BR(H+ -> t       bb     )
     1.00887169E-04    2          24        25   # BR(H+ -> W+      h      )
     4.13429172E-11    2          24        36   # BR(H+ -> W+      A      )
     4.94676510E-02    2     1000024   1000022   # BR(H+ -> ~chi_1+ ~chi_10)
     5.62032624E-04    2     1000024   1000023   # BR(H+ -> ~chi_1+ ~chi_20)
     2.22260069E-01    2     1000024   1000025   # BR(H+ -> ~chi_1+ ~chi_30)
     2.24593763E-01    2     1000024   1000035   # BR(H+ -> ~chi_1+ ~chi_40)
     3.14467894E-02    2     1000037   1000022   # BR(H+ -> ~chi_2+ ~chi_10)
     2.92120578E-01    2     1000037   1000023   # BR(H+ -> ~chi_2+ ~chi_20)
     2.51258009E-02    2     1000037   1000025   # BR(H+ -> ~chi_2+ ~chi_30)
     3.05859559E-03    2     1000037   1000035   # BR(H+ -> ~chi_2+ ~chi_40)
