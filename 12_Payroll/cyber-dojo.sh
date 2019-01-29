mkdir -p bin
g++ -std=c++17 PayrollTest.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
