g++ -std=c++17 -c main.cpp function_template.cpp class_template.cpp non_type_template.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [code does not compile]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 main.cpp function_template.cpp class_template.cpp non_type_template.cpp -o bin/main
rm -f *.o
bin/main
