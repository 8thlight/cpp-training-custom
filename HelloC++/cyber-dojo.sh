g++ -std=c++17 -c hello.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [hello.cpp does not compile]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 hello.cpp -o bin/hello
rm -f *.o
bin/hello
