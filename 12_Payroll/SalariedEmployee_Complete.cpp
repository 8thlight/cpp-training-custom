#include "SalariedEmployee_Complete.hpp"

static int afterTax(int amount)
{
  return (amount * 2) / 3;
}

namespace training
{
  SalariedEmployee::SalariedEmployee(int annualPay)
    : m_AnnualPay(annualPay)
  {}

  int SalariedEmployee::payForThisMonth() const
  {
    return afterTax(m_AnnualPay / 12);
  }
}
