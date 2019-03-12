// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "../TicTacToe/Board.hpp"
#include "../TicTacToe/Mark.hpp"
#include "../TicTacToe/RandomPlayer.hpp"

namespace training {
    TEST(RandomPlayer, withinRange) {
        RandomPlayer comp(X);
        Board board(3);
        int move = comp.getMove(board);

        EXPECT_TRUE(move <= 9);
        EXPECT_TRUE(move >= 1);
    }
}  // namespace training
