// Copyright 2019 < 8th Light >

#include "Player.hpp"

namespace training {
    Player::Player(const Mark mark)
        : m_Mark(mark) {}

    Mark Player::getMark() {
        return m_Mark;
    }
}  // namespace training
