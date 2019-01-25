#include <iostream>

using namespace std;

namespace training
{

  class NumberHolder
  {
    public:
      // default constructor
      NumberHolder();

      // constructor
      NumberHolder(int number);

      int getNumber() const;

      void setNumber(int number);

    private:
      int m_Number;
  };

  NumberHolder::NumberHolder()
  {
    m_Number = 0;
  }

  NumberHolder::NumberHolder(int number)
  {
    m_Number = number;
  }

  int NumberHolder::getNumber() const
  {
    return m_Number;
  }

  void NumberHolder::setNumber(int number) {
    m_Number = number;
  }


  //////////////////////////////////////////


  void instantiatingAndUsingAClass() {
    NumberHolder stackAllocated(4);
    cout << stackAllocated.getNumber() << endl;

    NumberHolder* heapAllocated = new NumberHolder(5);
    cout << heapAllocated->getNumber() << endl;
    delete heapAllocated;
  }

  void defaultConstruction() {
    NumberHolder holder;
    cout << holder.getNumber() << endl;
  }

  void constMethods() {
    const NumberHolder holder(3);

    cout << holder.getNumber() << endl;

    // holder.setNumber(1);  // will not compile
  }

}


int main()
{
  cout << "**Basic class usage**" << endl;
  training::instantiatingAndUsingAClass();
  training::constMethods();

  return 0;
}
