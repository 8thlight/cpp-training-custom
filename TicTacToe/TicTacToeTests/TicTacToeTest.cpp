// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "../TicTacToe/TicTacToe.hpp"
#include "../TicTacToe/RandomPlayer.hpp"
#include "StubUI.hpp"

namespace training {
    TEST(TicTacToe, hvhGameP1Wins) {
        StubUI stubUI({ "1", "1", "4", "2", "5", "3" });
        TicTacToe ttt(stubUI, 3);

        ttt.start();

        EXPECT_TRUE(stubUI.wasWinAnnounced());
    }

    TEST(TicTacToe, cvcGame) {
        StubUI stubUI({ "4" });
        TicTacToe ttt(stubUI, 3);

        ttt.start();

        EXPECT_TRUE(stubUI.wasWinAnnounced() || stubUI.wasDrawAnnounced());
    }
}  // namespace training
