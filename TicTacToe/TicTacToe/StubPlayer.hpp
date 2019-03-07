// Copyright 2019 < 8th Light >

#pragma once

#include "Player.hpp"
#include "Mark.hpp"
#include <vector>

using namespace std;

namespace training {
class StubPlayer : public Player {
 public:
  explicit StubPlayer(Mark mark);

  int getMove(const Board &board) override;

  void willSelectSpaces(vector<int> spaces);

 private:
  vector<int> m_SpacesToReturn;
  int m_CurrentIndex;
};
}  // namespace training
