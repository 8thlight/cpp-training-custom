#include "gtest/gtest.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

TEST(VectorTest, ConstructorInitialisation) {
  vector<string> aVector = vector<string>{"hello", "world"};

  ASSERT_EQ(aVector.size(), 2);
  ASSERT_EQ(aVector[0], "hello");
  ASSERT_EQ(aVector[1], "world");

  vector<string> anotherVector{"hello", "world"};

  ASSERT_EQ(aVector, anotherVector);
}

TEST(VectorTest, StartWithEmptyVector) {
  vector<string> aVector;
  aVector.emplace_back("hello");
  aVector.emplace_back("world");

  ASSERT_EQ(aVector.size(), 2);
  ASSERT_EQ(aVector[0], "hello");
  ASSERT_EQ(aVector[1], "world");

  vector<string> anotherVector{"hello", "world"};

  ASSERT_EQ(aVector, anotherVector);
}

TEST(VectorTest, GettingItemsFromVector) {
  vector<string> aVector;
  aVector.emplace_back("hello");
  aVector.emplace_back("world");

  ASSERT_EQ(aVector[0], "hello");
  ASSERT_EQ(aVector[1], "world");
  ASSERT_NO_FATAL_FAILURE(aVector[2]);

  ASSERT_EQ(aVector.at(0), "hello");
  ASSERT_EQ(aVector.at(1), "world");
  ASSERT_THROW(aVector.at(2), out_of_range);

  ASSERT_EQ(aVector.at(0), aVector[0]);
}

TEST(VectorTest, RemovingItemsFromVector) {
  vector<string> aVector{"hello", "world"};

  aVector.pop_back();

  ASSERT_EQ(aVector.size(), 1);
  ASSERT_EQ(aVector.at(0), "hello");
  ASSERT_THROW(aVector.at(1), out_of_range);

  // Note that:
  ASSERT_EQ(aVector[1], "world");
}

TEST(VectorTest, IteratingOverVector) {
  int sum;
  vector<int> aVector{100, 200, 300};

  sum = 0;
  for (int i = 0; i < aVector.size(); i++) {
    sum += aVector.at(i);
  }

  ASSERT_EQ(sum, 600);

  // Using the vector's iterator:
  sum = 0;
  for (auto it = aVector.begin(); it != aVector.end(); ++it) {
    sum += *it;
  }

  ASSERT_EQ(sum, 600);

  // Using a for each loop:
  sum = 0;
  for (int value : aVector) {
    sum += value;
  }

  ASSERT_EQ(sum, 600);

  // We can also pop the vector's elements and loop until the vector is empty:
  sum = 0;
  while (!aVector.empty()) {
    sum += aVector.back();
    aVector.pop_back();
  }

  ASSERT_EQ(sum, 600);
}

TEST(VectorTest, SortingVectorsBasic) {
  vector<int> numbers{10, 30, 20, 50, 40, 90, 70, 60, 80};

  sort(numbers.begin(), numbers.end());

  vector<int> sorted{10, 20, 30, 40, 50, 60, 70, 80, 90};
  ASSERT_EQ(sorted, numbers);
}

class Person {
 private:
  int age;
  string name;
 public:
  Person(string name, int age);
  int getAge() const;
  string getName() const;
  bool operator==(const Person &other) const;
};

Person::Person(string name, int age) {
  this->age = age;
  this->name = name;
}

int Person::getAge() const {
  return age;
}

string Person::getName() const {
  return name;
}

bool Person::operator==(const Person &other) const {
  return age == other.getAge() && name == other.getName();
}

struct ageSort {
  bool operator()(const Person &person, const Person &other) {
    return person.getAge() < other.getAge();
  }
};

TEST(VectorTest, SortingVectorsCustomClass) {
  Person person1("Xavier", 23);
  Person person2("Amanda", 87);
  Person person3("Stephanie", 19);
  Person person4("James", 42);

  vector<Person> people;
  people.emplace_back(person1);
  people.emplace_back(person2);
  people.emplace_back(person3);
  people.emplace_back(person4);

  vector<Person> ageSorted;
  ageSorted.emplace_back(person3);
  ageSorted.emplace_back(person1);
  ageSorted.emplace_back(person4);
  ageSorted.emplace_back(person2);

  // We can use a struct that defines our comparator.
  sort(people.begin(), people.end(), ageSort());
  ASSERT_EQ(ageSorted, people);

  vector<Person> nameSorted;
  nameSorted.emplace_back(person2);
  nameSorted.emplace_back(person4);
  nameSorted.emplace_back(person3);
  nameSorted.emplace_back(person1);

  // Or we can use a lambda expression. For more details, see: https://en.cppreference.com/w/cpp/language/lambda
  sort(people.begin(), people.end(), [](const Person &person, const Person &other) {
    return person.getName() < other.getName();
  });
  ASSERT_EQ(nameSorted, people);
}