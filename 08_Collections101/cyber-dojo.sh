g++ -std=c++17 -c basic_vectors.cpp basic_maps.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 basic_vectors.cpp basic_maps.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
