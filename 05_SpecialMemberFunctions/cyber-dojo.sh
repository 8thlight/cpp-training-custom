g++ -std=c++17 -c String.cpp StringTest.cpp CoordinateTest.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 String.cpp StringTest.cpp CoordinateTest.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
