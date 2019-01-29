#include "DayRateEmployee_Complete.hpp"

namespace training
{
    DayRateEmployee::DayRateEmployee(int dailyRate)
      : m_DailyRate(dailyRate)
    {}

    void DayRateEmployee::addTimeCard(const TimeCard& timeCard)
    {
      m_TimeCards.push_back(timeCard);
    }

    int DayRateEmployee::payForThisMonth() const
    {
      int pay = 0;
      for (const TimeCard& timeCard : m_TimeCards)
      {
        pay += timeCard.days * m_DailyRate;
      }
      return pay;
    }
}
