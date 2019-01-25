struct A
{
  A();                     // default constructor

  A(const A& other);       // copy constructor

  A& operator=(A other);  // copy assignment constructor

  ~A();                    // destructor

  // Since C++11
  A(A&& other);            // move constructor

  A& operator=(A&& other); // move assignment operator
};
