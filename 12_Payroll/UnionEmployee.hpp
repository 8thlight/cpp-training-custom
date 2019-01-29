#ifndef __TRAINING_UNIONEMPLOYEE_HPP__
#define __TRAINING_UNIONEMPLOYEE_HPP__

#include <memory>
#include "Employee.hpp"

namespace training
{
  class UnionEmployee : public Employee
  {
    public:
      UnionEmployee(std::unique_ptr<Employee> employee);

      int payForThisMonth() const override;

      void buyItemWithValue(int value);

    private:
      std::unique_ptr<Employee> m_Employee;
      int m_Deductions;
  };
}

#endif
