#include "gtest/gtest.h"

#include <iostream>
#include <map>
#include <string>

using namespace std;

TEST(MapTest, ConstructorInitialisation)
{
  map<int, string> aMap;
  aMap.emplace(1, "one");
  aMap.emplace(2, "two");
  aMap.emplace(10, "ten");

  ASSERT_EQ(3, aMap.size());
}

TEST(MapTest, GetKeysValuesFromMap)
{
  map<int, string> aMap;
  aMap.emplace(1, "one");
  aMap.emplace(2, "two");
  aMap.emplace(10, "ten");

  auto mapIterator = aMap.find(1);
  ASSERT_EQ(1, mapIterator->first);
  ASSERT_EQ("one", mapIterator->second);
}

TEST(MapTest, KeyDoesNotExistInMap)
{
  map<string, string> aMap;
  aMap.emplace("key", "value");

  auto mapIterator = aMap.find("nothing");
  ASSERT_TRUE(mapIterator == aMap.end());
}

TEST(MapTest, IteratingOverMap)
{
  int keySum;
  int valueSum;

  map<int, int> aMap;
  aMap.emplace(1, 100);
  aMap.emplace(2, 200);
  aMap.emplace(3, 300);
  aMap.emplace(4, 400);
  aMap.emplace(5, 500);
  aMap.emplace(6, 600);

  keySum = 0;
  valueSum = 0;
  for (auto it = aMap.begin(); it != aMap.end(); ++it)
  {
    keySum += it->first;
    valueSum += it->second;
  }

  ASSERT_EQ(21, keySum);
  ASSERT_EQ(2100, valueSum);

  keySum = 0;
  valueSum = 0;
  for (auto it : aMap)
  {
    keySum += it.first;
    valueSum += it.second;
  }

  ASSERT_EQ(21, keySum);
  ASSERT_EQ(2100, valueSum);
}
