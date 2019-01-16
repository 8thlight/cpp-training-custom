#include <string>
#include <iostream>

using namespace std;

namespace training {

  class Human {
    public:
      int age;
    protected:          // not accessible when using class
      string name;
    private:
      string id;
  };

  class Phil : public Human {
    public:
      void foo() {
        cout << age;
        cout << name;
        // cout << id;  // not accessible
      }
  };

}
