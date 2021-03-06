// Copyright 2019 < 8th Light >

#pragma once

#include <stdlib.h>
#include "Board.hpp"
#include "Player.hpp"

namespace training {
    class RandomPlayer : public Player {
    public:
        explicit RandomPlayer(Mark mark);

        int getMove(const Board &board) override;

    private:
        int generateRandInRange();
    };
}  // namespace training
