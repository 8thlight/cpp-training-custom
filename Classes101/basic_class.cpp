#include <iostream>

using namespace std;

namespace training
{

  class NumberHolder
  {
    public:
      // constructor
      NumberHolder(int number);

      int getNumber();

    private:
      int m_Number;
  };

  NumberHolder::NumberHolder(int number)
  {
    m_Number = number;
  }

  int NumberHolder::getNumber()
  {
    return m_Number;
  }

  void basicClassUsage()
  {
    NumberHolder stackAllocated(4);
    cout << stackAllocated.getNumber() << endl;

    NumberHolder* heapAllocated = new NumberHolder(5);
    cout << heapAllocated->getNumber() << endl;
    delete heapAllocated;
  }

}
