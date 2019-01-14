g++ -std=c++17 -c main.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 main.cpp references.cpp -o bin/main
rm -f *.o
bin/main
