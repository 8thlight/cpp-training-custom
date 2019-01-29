#ifndef __TRAINING_SALARIED_EMPLOYEE_HPP__
#define __TRAINING_SALARIED_EMPLOYEE_HPP__

#include "Employee_Complete.hpp"

namespace training
{
  class SalariedEmployee : public Employee
  {
    public:
      SalariedEmployee(int annualPay);

      int payForThisMonth() const override;

    private:
      int m_AnnualPay;
  };
}

#endif
