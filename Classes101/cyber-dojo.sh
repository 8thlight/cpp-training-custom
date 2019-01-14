g++ -std=c++17 -c basic_class.cpp Game.cpp Bowling.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 basic_class.cpp Game.cpp Bowling.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
