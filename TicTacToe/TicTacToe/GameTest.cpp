#include <gtest/gtest.h>
#include "Game.cpp"
#include "Player.cpp"
#include "StubPlayer.hpp"
#include "StubUI.hpp"

using namespace std;

namespace training {

	TEST(Game, EndingInDraw) {
		StubUI uistub;
		StubPlayer playerOne = StubPlayer(X);
		StubPlayer playerTwo = StubPlayer(O);
		playerOne.willSelectSpaces({ 1, 2, 7, 6, 9 });
		playerTwo.willSelectSpaces({ 5, 3, 4, 8 });

		Game game(playerOne, playerTwo, uistub, 3);

		game.play();

		EXPECT_TRUE(game.isGameOver());
	}

	TEST(Game, P1WinRow) {
		StubUI uistub;
		StubPlayer playerOne = StubPlayer(X);
		StubPlayer playerTwo = StubPlayer(O);
		playerOne.willSelectSpaces({ 1, 2, 3 });
		playerTwo.willSelectSpaces({ 4, 5 });
		Game game(playerOne, playerTwo, uistub, 3);

		game.play();

		EXPECT_TRUE(game.isGameOver());
	}
}