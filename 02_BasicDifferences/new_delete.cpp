#include <iostream>

using namespace std;

namespace training
{

  void newAndDelete()
  {
    cout << "**New and delete**" << endl;

    int* defaultInitialised = new int;
    cout << *defaultInitialised << endl;

    int* specificallyInitialised = new int (27);
    cout << *specificallyInitialised << endl;

    int automaticallyDeletedArray[21];
    int* dynamicallyAllocatedArray = new int[21];

    delete[] dynamicallyAllocatedArray;
    delete specificallyInitialised;
    delete defaultInitialised;

  } // compiler handles deallocation of automaticallyDeletedArray
    // when it goes out of scope

}

