#include <gtest/gtest.h>
#include "TicTacToe.hpp"
#include "UI.hpp"

using namespace std;

namespace training {
	TEST(TicTacToe, hvhGameP1Wins) {
		istringstream input("1" + newline + "1" + newline + "4" + newline + "2" + newline + "5" + newline + "3");
		ostringstream output;
		UI ui(input, output);
		TicTacToe ttt(ui, 3);

		ttt.start();

		EXPECT_TRUE(output.str().find("win") != string::npos);
	}

	TEST(TicTacToe, hvhGameAfterIncorrectModeChoices) {
		istringstream
			input("0.1" + newline + "w1" +
				newline + "0" + newline + "6" +
				newline + "1" + newline + "1" +
				newline + "4" + newline + "2"
				+ newline + "5" + newline + "3");
		ostringstream output;
		UI ui(input, output);
		TicTacToe ttt(ui, 3);

		ttt.start();

		EXPECT_TRUE(output.str().find("win") != string::npos);
	}

	TEST(TicTacToe, cvcGame) {
		istringstream input("4");
		ostringstream output;
		UI ui(input, output);
		TicTacToe ttt(ui, 3);

		ttt.start();

		EXPECT_TRUE((output.str().find("win") || output.str().find("draw")) != string::npos);
	}
}