#include <string>
#include <iostream>

using namespace std;

namespace training
{

  class Human
  {
    public:
      Human(int age, const string& name, const string& id)
        : m_Age(age), m_Name(name), m_Id(id)
      {}

      int m_Age;
    protected:          // not accessible when using class
      string m_Name;
    private:
      string m_Id;
  };

  class Phil : public Human
  {
    public:
      Phil()
        : Human(30, "Phil", "001-AAA")
      {}

      void foo()
      {
        cout << m_Age << " " << m_Name << endl;
        // cout << m_Id;  // not accessible
      }
  };


  void inheritance()
  {
    cout << "**Inheritance**" << endl;
    Phil phil;
    phil.foo();
  }

}
