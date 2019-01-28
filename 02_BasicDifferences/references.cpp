#include <iostream>
#include <string>

using namespace std;

namespace training
{

  void referenceBasics()
  {
    int number = 5;

    // references are declared using &
    int& referenceToNumber = number;
    cout << referenceToNumber << endl; // 5

    // they are similar to a pointer to the underlying variable
    number = 6;
    cout << referenceToNumber << endl; // 6

    referenceToNumber = 8;
    cout << number << endl; // 8

    // references must be assigned immediately
    // int& nullReference;  // will not compile
  }


  ////////////////////////////////////////////////


  struct Customer
  {
    int id;
  };

  void referenceAccess()
  {
    Customer customer;
    customer.id = 1;

    Customer* ptr = &customer;
    Customer& ref = customer;

    // note members are accessed using .
    cout << ptr->id << endl;
    cout << ref.id << endl;

    // address can be taken as normal but what
    // do you think will happen here?
    cout << &customer << endl;
    cout << &ptr << endl;
    cout << &ref << endl;
  }


  ////////////////////////////////////////////////


  void modifyingParam(int& number)
  {
    number = 3;
  }

  void printId(const Customer& readOnlyParameter)
  {
    // access is 'safe' as reference had to be assigned when created
    cout << readOnlyParameter.id << endl;

    // const ref prevents modification
    // readOnlyParameter.id = 2;  // will not compile
  }

  void references()
  {
    cout << "References" << endl;
    referenceBasics();
    referenceAccess();

    int x = 3;
    modifyingParam(x);
    cout << "Modified param: " << x << endl;

    Customer customer;
    customer.id = 123;
    printId(customer);
  }

}
