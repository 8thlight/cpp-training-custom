// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "CommandLineUI.hpp"

using std::istringstream;
using std::ostringstream;

namespace training {
    TEST(CommandLineUI, InputIsNotNumberValidation) {
        istringstream input("asd" + newline + "1?"
            + newline + "" + newline + "1");
        ostringstream output;

        CommandLineUI ui(input, output);
        Board board(3);

        EXPECT_TRUE(ui.getValidMove(board) == 1);
    }

    TEST(CommandLineUI, InputIsNotInRangeValidation) {
        istringstream input("10" + newline + "0" + newline
            + "0.1" + newline + "1.0" + newline + "5");
        ostringstream output;
        CommandLineUI ui(input, output);
        Board board(3);

        EXPECT_TRUE(ui.getValidMove(board) == 5);
    }

    TEST(CommandLineUI, displayMove) {
        istringstream input("");
        ostringstream output;
        CommandLineUI ui(input, output);
        Board board(3);

        board.setMark(1, X);
        board.setMark(3, O);
        board.setMark(4, X);
        board.setMark(7, O);

        ui.displayMove(board);

        EXPECT_TRUE(output.str() == displayMoveMessage + newline
            + newline + "[X] [2] [O] " + newline + "[X] [5] [6] "
            + newline + "[O] [8] [9] " + newline + newline);
    }

    TEST(CommandLineUI, P1WinMessage) {
        istringstream input("");
        ostringstream output;
        CommandLineUI ui(input, output);

        ui.announceWinner(X);

        EXPECT_TRUE(output.str() == "X is the winner!" + newline + newline);
    }

    TEST(CommandLineUI, P2WinMessage) {
        istringstream input("");
        ostringstream output;
        CommandLineUI ui(input, output);

        ui.announceWinner(O);

        EXPECT_TRUE(output.str() == "O is the winner!" + newline + newline);
    }

    TEST(CommandLineUI, getModeWhenInitiallyOutOfRange) {
        istringstream input("0" + newline + "7" + newline
            + "1.1" + newline + "1");
        ostringstream output;
        CommandLineUI ui(input, output);

        EXPECT_TRUE(ui.getValidMode() == 1);
    }

    TEST(CommandLineUI, getModeWhenInitiallyNotNumber) {
        istringstream input("1a" + newline + "?3" + newline + "3");
        ostringstream output;
        CommandLineUI ui(input, output);

        EXPECT_TRUE(ui.getValidMode() == 3);
    }
}  // namespace training
