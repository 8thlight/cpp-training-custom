#ifndef __TRAINING_LOTTERYEMPLOYEE_HPP__
#define __TRAINING_LOTTERYEMPLOYEE_HPP__

#include <random>

namespace training
{
  static int randomAmount()
  {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 20000);
    return dist(rng);
  }

  class LotteryEmployee
  {
    public:
      LotteryEmployee(int annualSalary)
        : m_AnnualSalary(annualSalary)
      {}

      int payForThisMonth()
      {
        return (m_AnnualSalary / 12) + randomAmount();
      }

    private:
      int m_AnnualSalary;
  };
}

#endif
