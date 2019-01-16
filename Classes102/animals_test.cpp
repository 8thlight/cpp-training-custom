#include <gtest/gtest.h>
#include "Animal.hpp"

std::string soundMadeBy(Animal& animal) {
  return animal.sound();
}

TEST(Animals, MakeAppropriateSounds) {
  Dog dog("fido");
  Cat cat("felix");
  Cow cow("daisy");

  EXPECT_EQ(soundMadeBy(dog), "WOOF! I'm fido");
  EXPECT_EQ(soundMadeBy(cat), "MEOW! I'm felix");
  EXPECT_EQ(soundMadeBy(cow), "MOO! I'm daisy");
}
