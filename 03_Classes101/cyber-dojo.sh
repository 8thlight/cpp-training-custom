g++ -std=c++17 -c basic_class.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 basic_class.cpp -o bin/main
rm -f *.o
bin/main
