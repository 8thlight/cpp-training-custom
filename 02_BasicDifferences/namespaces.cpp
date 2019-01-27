#include <iostream>

// namespaces are declared as a block
namespace training
{

  void namespaceBasics()
  {
    // symbols declared in namespace must be prefixed by namespace
    std::cout << "cout is in std namespace, as is endl" << std::endl;
    // cout << "I won't compile";

    // a using statement allows use without the prefix in the current scope
    using namespace std;
    cout << "now I will compile" << endl;

    /*
     * with great power comes great responsibilty
     * generally prefer being more explicit
     *
     * !!! 'using namespace' is DANGEROUS in headers !!!
     */
  }


  //////////////////////////////////////////////////////


  // namespaces can be nested training::customer::ship
  namespace customer
  {
    void ship(int orderId)
    {
      std::cout << "Shipping order " << orderId << std::endl;
    }
  }

  namespace release
  {
    void ship(int releaseNumber)
    {
      std::cout << "Shipping release " << releaseNumber << std::endl;
    }
  }

  void namespaceUsage()
  {
    // namespaces allow us to use names already used by imported
    // libraries or elsewhere in our codebase

    // this is useful when different domains use the same word
    // for different concepts
    int orderId = 5;
    customer::ship(orderId);

    int releaseNumber = 3;
    release::ship(releaseNumber);
  }

  void namespaces()
  {
    std::cout << "**Namespaces**" << std::endl;
    namespaceBasics();
    namespaceUsage();
  }

}
