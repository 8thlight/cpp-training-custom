#include <string>
#include <iostream>

using namespace std;

namespace training
{

  class Human
  {
    public:
      int m_Age;
    protected:          // not accessible when using class
      string m_Name;
    private:
      string m_Id;
  };

  class Phil : public Human
  {
    public:
      void foo()
      {
        cout << m_Age;
        cout << m_Name;
        // cout << m_Id;  // not accessible
      }
  };

}
