#include <iostream>

using namespace std;

namespace training {

  void foo(int n) {
    cout << "I'm a number " << n << endl;
  }

  void foo(int n, string s) {
    cout << "I'm a number with a string "
         << n
         << " "
         << s
         << endl;
  }

  struct Customer {
    int id;
  };

  void foo(const Customer& c) {
    cout << "I'm a const ref customer " << c.id << endl;
  }

  void foo(Customer& c) {
    cout << "I'm a non-const ref customer " << c.id << endl;
  }

  // functions that differ only in return type are ambiguous
  // this will not compile:
  //int foo(Customer& c) {
  //  return 0;
  //}

  void functionOverloading() {
    foo(1);
    foo(2, "hello");

    Customer c;
    c.id = 3;
    foo(c);
  }



  void bar(int i, string s = "default") {
    cout << i << ", " << s << endl;
  }

  void defaultParameters() {
    bar(3);
    bar(3, "hello");
  }

  void functions() {
    functionOverloading();
    defaultParameters();
  }
}
