#include <iostream>
#include <exception>

namespace training {

  void functionThatMightThrow(int i) {
    if (i == 1) {
      throw std::exception();
    }
  }

  void exceptions() {
    try {
      functionThatMightThrow(1);
    }
    catch(std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << "moving on..." << std::endl;
  }

}
