g++ -std=c++17 -c animals_test.cpp Animal.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 animals_test.cpp Animal.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
