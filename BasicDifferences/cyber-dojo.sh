g++ -std=c++17 -c main.cpp namespaces.cpp references.cpp functions.cpp exceptions.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 main.cpp namespaces.cpp references.cpp functions.cpp exceptions.cpp -o bin/main
rm -f *.o
bin/main
