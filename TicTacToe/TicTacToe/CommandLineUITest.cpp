// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "CommandLineUI.hpp"

using std::istringstream;
using std::ostringstream;

namespace training {
    TEST(CommandLineUI, InputIsNotNumberValidation) {
        istringstream input("asd" NEWLINE "1?" 
            NEWLINE "" NEWLINE "1");
        ostringstream output;

        CommandLineUI ui(input, output);
        Board board(3);

        EXPECT_TRUE(ui.getValidMove(board) == 1);
    }

    TEST(CommandLineUI, InputIsNotInRangeValidation) {
        istringstream input("10" NEWLINE "0" NEWLINE
            "0.1" NEWLINE "1.0" NEWLINE "5");
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

        string expected = displayMoveMessage;
        expected.append(NEWLINE NEWLINE "[X] [2] [O] "
            NEWLINE "[X] [5] [6] " NEWLINE "[O] [8] [9] "
            NEWLINE NEWLINE);
        
            EXPECT_TRUE(output.str() == expected);
    }

    TEST(CommandLineUI, P1WinMessage) {
        istringstream input("");
        ostringstream output;
        CommandLineUI ui(input, output);

        ui.announceWinner(X);

        EXPECT_TRUE(output.str() == "X is the winner!" NEWLINE NEWLINE);
    }

    TEST(CommandLineUI, P2WinMessage) {
        istringstream input("");
        ostringstream output;
        CommandLineUI ui(input, output);

        ui.announceWinner(O);

        EXPECT_TRUE(output.str() == "O is the winner!" NEWLINE NEWLINE);
    }

    TEST(CommandLineUI, getModeWhenInitiallyOutOfRange) {
        istringstream input("0" NEWLINE "7" NEWLINE "1.1" NEWLINE "1");
        ostringstream output;
        CommandLineUI ui(input, output);

        EXPECT_TRUE(ui.getValidMode() == 1);
    }

    TEST(CommandLineUI, getModeWhenInitiallyNotNumber) {
        istringstream input("1a" NEWLINE "?3" NEWLINE "3");
        ostringstream output;
        CommandLineUI ui(input, output);

        EXPECT_TRUE(ui.getValidMode() == 3);
    }
}  // namespace training
