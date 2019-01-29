#include "UnionEmployee_Complete.hpp"
#include <utility>    // for std::move

namespace training
{
  UnionEmployee::UnionEmployee(std::unique_ptr<Employee> employee)
    : m_Employee(std::move(employee)),
      m_Deductions(0)
  {}

  int UnionEmployee::payForThisMonth() const
  {
    return m_Employee->payForThisMonth() - m_Deductions;
  }

  void UnionEmployee::buyItemWithValue(int value)
  {
    m_Deductions += value;
  }
}
