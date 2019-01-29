#ifndef __TRAINING_TIMECARD_HPP__
#define __TRAINING_TIMECARD_HPP__

namespace training
{
  struct TimeCard
  {
    TimeCard(int numberOfDays)
      : days(numberOfDays)
    {}

    int days;
  };
}

#endif
