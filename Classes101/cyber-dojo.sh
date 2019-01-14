g++ -std=c++17 -c main.cpp basic_class.cpp Game.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 main.cpp basic_class.cpp Game.cpp -o bin/main
rm -f *.o
bin/main
