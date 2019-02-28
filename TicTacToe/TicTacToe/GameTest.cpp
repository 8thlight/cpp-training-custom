#include <gtest/gtest.h>
#include "Game.hpp"
#include "StubPlayer.hpp"
#include "UIStub.hpp"

using namespace std;

namespace training {

	TEST(Game, EndingInDraw) {
		UIStub uistub;
		StubPlayer playerOne = StubPlayer(X);
		StubPlayer playerTwo = StubPlayer(O);
		playerOne.willSelectSpaces({ 1, 2, 7, 6, 9 });
		playerTwo.willSelectSpaces({ 5, 3, 4, 8 });

		Game game(playerOne, playerTwo, uistub, 3);

		game.play();

		EXPECT_TRUE(game.isGameOver());
	}

	TEST(Game, P1WinRow) {
		UIStub uistub;
		StubPlayer playerOne = StubPlayer(X);
		StubPlayer playerTwo = StubPlayer(O);
		playerOne.willSelectSpaces({ 1, 2, 3 });
		playerTwo.willSelectSpaces({ 4, 5 });
		Game game(playerOne, playerTwo, uistub, 3);

		game.play();

		EXPECT_TRUE(game.isGameOver());
	}
}