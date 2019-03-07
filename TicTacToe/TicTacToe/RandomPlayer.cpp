// Copyright 2019 < 8th Light >

#include "RandomPlayer.hpp"

namespace training {
RandomPlayer::RandomPlayer(const Mark mark) : Player(mark) {
}

int RandomPlayer::getMove(const Board &board) {
    int tileChoice = generateRandInRange();
    while (board.tileOccupied(tileChoice)) {
        tileChoice = generateRandInRange();
    }
    return tileChoice;
}

int RandomPlayer::generateRandInRange() {
    return rand() % 9 + 1;
}
}  // namespace training
