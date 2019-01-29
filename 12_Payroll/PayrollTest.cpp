#include <gtest/gtest.h>
#include "LotteryEmployee.hpp"
#include "TimeCard.hpp"

using namespace training;
using namespace std;

TEST(Payroll, CalculatesMonthlyPayForSalariedEmployees)
{
  const int annualSalary = 36000;
  SalariedEmployee salariedEmployee(annualSalary);
  EXPECT_EQ(salariedEmployee.payForThisMonth(), 2000);
}

//TEST(Payroll, CalculatesMonthlyPayForDayRateEmployees)
//{
//  TimeCard twoDayCard(2);
//  TimeCard tenDayCard(10);
//
//  const int dailyRate = 200;
//  DayRateEmployee dayRateEmployee(dailyRate);
//  dayRateEmployee.addTimeCard(twoDayCard);
//  dayRateEmployee.addTimeCard(tenDayCard);
//
//  EXPECT_EQ(dayRateEmployee.payForThisMonth(), 2400);
//}


//int averagePayThisMonth(const vector<shared_ptr<Employee>>& employees)
//{
//  /*
//   * YOU WILL NEED TO IMPLEMENT REAL SOLUTION HERE
//   */
//  return 0;
//}

//TEST(Payroll, CalculatesAveragePayForAllEmployees)
//{
//  shared_ptr<SalariedEmployee> salariedEmployee (new SalariedEmployee(36000));
//
//  shared_ptr<DayRateEmployee> dayRateEmployee(new DayRateEmployee(200));
//  TimeCard twoDayCard(2);
//  TimeCard tenDayCard(10);
//  dayRateEmployee->addTimeCard(twoDayCard);
//  dayRateEmployee->addTimeCard(tenDayCard);
//
//  vector<shared_ptr<Employee>> employees{salariedEmployee, dayRateEmployee};
//
//  EXPECT_EQ(averagePayThisMonth(employees), 2200);
//}


//TEST(Payroll, CalculatesPayForUnionEmployees)
//{
//  UnionEmployee unionEmployee(make_unique<SalariedEmployee>(36000));
//  unionEmployee.buyItemWithValue(100);
//  unionEmployee.buyItemWithValue(300);
//
//  EXPECT_EQ(unionEmployee.payForThisMonth(), 1600);
//}


//TEST(Payroll, CalculatesPayForLotteryEmployee)
//{
//  LotteryEmployee lotteryEmployee(36000);
//  EXPECT_EQ(lotteryEmployee.payForThisMonth(), 3500);
//}
