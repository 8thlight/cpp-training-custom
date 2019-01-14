#include <iostream>

using namespace std;

namespace training {

  class NumberHolder {
    public:
      // constructor
      NumberHolder(int number);

      int getNumber();

    private:
      int _number;
  };

  NumberHolder::NumberHolder(int number) {
    _number = number;
  }

  int NumberHolder::getNumber() {
    return _number;
  }

  void basicClassUsage() {
    NumberHolder stackAllocated(4);
    cout << stackAllocated.getNumber() << endl;

    NumberHolder* heapAllocated = new NumberHolder(5);
    cout << heapAllocated->getNumber() << endl;
    delete heapAllocated;
  }

}
