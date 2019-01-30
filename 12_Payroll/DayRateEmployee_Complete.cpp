#include "DayRateEmployee_Complete.hpp"

namespace training
{
    DayRateEmployee::DayRateEmployee(int dailyRate)
      : m_DailyRate(dailyRate)
    {}

    void DayRateEmployee::addTimeCard(const TimeCard& timeCard)
    {
      m_Days += timeCard.days;
    }

    int DayRateEmployee::payForThisMonth() const
    {
      return m_DailyRate*m_Days;
    }
}
