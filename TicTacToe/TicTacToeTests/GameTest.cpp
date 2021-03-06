// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "../TicTacToe/Game.hpp"
#include "../TicTacToe/Player.hpp"
#include "StubPlayer.hpp"
#include "StubUI.hpp"

namespace training {

    TEST(Game, EndingInDraw) {
        StubUI stubUI;
        StubPlayer playerOne = StubPlayer(X);
        StubPlayer playerTwo = StubPlayer(O);
        playerOne.willSelectSpaces({ 1, 2, 7, 6, 9 });
        playerTwo.willSelectSpaces({ 5, 3, 4, 8 });

        Game game(playerOne, playerTwo, stubUI, 3);

        game.play();

        EXPECT_TRUE(game.isGameOver());
    }

    TEST(Game, P1WinRow) {
        StubUI stubUI;
        StubPlayer playerOne = StubPlayer(X);
        StubPlayer playerTwo = StubPlayer(O);
        playerOne.willSelectSpaces({ 1, 2, 3 });
        playerTwo.willSelectSpaces({ 4, 5 });
        Game game(playerOne, playerTwo, stubUI, 3);

        game.play();

        EXPECT_TRUE(game.isGameOver());
    }
}  // namespace training
