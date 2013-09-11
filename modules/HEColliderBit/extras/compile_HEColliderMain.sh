g++ HEColliderMain.cpp Delphes3Backend.cpp Pythia8Backend.cpp -O3 \
  -pedantic -Wall -Wshadow -Wno-long-long -fopenmp \
  -I$BOOST -I$DELPHES3 -I$DELPHES3/external -I$PYTHIA8/include \
  `root-config --cflags --libs --ldflags` -lEG \
  -L$DELPHES3 -lDelphes -L$PYTHIA8/lib/archive -lpythia8 -llhapdfdummy \
  -o HEColliderMain
