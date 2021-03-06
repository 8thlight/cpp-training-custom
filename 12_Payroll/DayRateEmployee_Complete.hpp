#ifndef __TRAINING_DAYRATEEMPLOYEE_HPP__
#define __TRAINING_DAYRATEEMPLOYEE_HPP__

#include "Employee_Complete.hpp"
#include "TimeCard.hpp"

namespace training
{
  class DayRateEmployee : public Employee
  {
    public:
      DayRateEmployee(int dailyRate);

      void addTimeCard(const TimeCard& timeCard);

      int payForThisMonth() const override;

    private:
      int m_DailyRate;
      int m_Days;
  };
}

#endif
