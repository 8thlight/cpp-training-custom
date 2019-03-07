// Copyright 2019 < 8th Light >

#include "StubPlayer.hpp"

namespace training {
StubPlayer::StubPlayer(const Mark mark)
    : Player(mark), m_CurrentIndex(0) {}

int StubPlayer::getMove(const Board &board) {
    return m_SpacesToReturn[m_CurrentIndex++];
}

void StubPlayer::willSelectSpaces(const vector<int> spaces) {
    m_SpacesToReturn = spaces;
}
}  // namespace training
