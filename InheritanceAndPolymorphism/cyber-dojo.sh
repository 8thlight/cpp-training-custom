g++ -std=c++17 -c main.cpp inheritance.cpp polymorphism.cpp pure_virtual.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 main.cpp inheritance.cpp polymorphism.cpp pure_virtual.cpp -o bin/main
rm -f *.o
bin/main
