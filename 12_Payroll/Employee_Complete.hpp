#ifndef __TRAINING_EMPLOYEE_HPP__
#define __TRAINING_EMPLOYEE_HPP__

namespace training
{
  struct Employee
  {
    virtual int payForThisMonth() const = 0;

    virtual ~Employee() {}
  };
}

#endif
