
g++ -std=c++17 -c basic_vector.cpp basic_map.cpp roman_numerals_test.cpp roman_numerals_converter.cpp
if [ $? != 0 ]; then
  echo
  echo ">>> [compilation failed]"
  echo
  exit
fi

mkdir -p bin
g++ -std=c++17 basic_vector.cpp basic_map.cpp roman_numerals_test.cpp roman_numerals_converter.cpp -lgtest -lgtest_main -pthread -o bin/main
rm -f *.o
bin/main
