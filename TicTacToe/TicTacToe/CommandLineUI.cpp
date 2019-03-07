// Copyright 2019 < 8th Light >

#include "CommandLineUI.hpp"

namespace training {
    CommandLineUI::CommandLineUI(istream &input, ostream &output, int delayTime)
        : m_Input(input), m_Output(output), m_DelayTime(delayTime) {}

    int CommandLineUI::getValidMove(const Board &board) {
        string input = getTileInput(board);
        while (!isInputValid(input, board)) {
            announceInvalidInput();
            input = getTileInput(board);
        }
        return stoi(input);
    }

    void CommandLineUI::welcome() {
        m_Output << welcomeMessage + newline + newline;
    }

    void CommandLineUI::displayMove(const Board &board) {
        m_Output << displayMoveMessage + newline + newline
            + outputBoard(board) + newline;
        Sleep(m_DelayTime);
    }

    void CommandLineUI::announceWinner(const Mark mark) {
        m_Output << getOccupiedMarkAsString(mark) + winnerMessage
            + newline + newline;
    }

    void CommandLineUI::announceDraw() {
        m_Output << drawMessage + newline + newline;
    }

    void CommandLineUI::announceInvalidInput() {
        m_Output << invalidInputMessage + newline + newline;
    }

    int CommandLineUI::getValidMode() {
        string input = getModeInput();
        while (!isModeValid(input)) {
            announceInvalidInput();
            input = getModeInput();
        }
        return stoi(input);
    }

    bool CommandLineUI::isModeValid(const string input) {
        for (auto mode : allModes) {
            if (input == to_string(mode + 1)) {
                return true;
            }
        }
        return false;
    }

    string CommandLineUI::getModeInput() {
        m_Output << askForModeMessage + newline + newline;
        return getInput();
    }

    string CommandLineUI::getTileInput(const Board &board) {
        askForTile(board);
        return getInput();
    }

    string CommandLineUI::getInput() {
        string input;
        m_Input >> input;
        return input;
    }

    bool CommandLineUI::isInputValid(const string input, const Board &board) {
        int dimension = board.getDimension();
        int size = dimension * dimension;
        for (int i = 1; i < size + 1; ++i) {
            if (input == to_string(i)) {
                return true;
            }
        }
        return false;
    }

    string CommandLineUI::outputBoard(const Board &board) {
        int dimension = board.getDimension();
        int size = dimension * dimension;
        string boardRepresentation;
        for (int i = 1; i < size + 1; ++i) {
            boardRepresentation.append("["
                + getMarkAsString(board.getMark(i), i) + "] ");
            if (i % dimension == 0) {
                boardRepresentation.append(newline);
            }
        }
        return boardRepresentation;
    }

    string CommandLineUI::getMarkAsString(const Mark mark, const int number) {
        return (mark == _) ? to_string(number) : getOccupiedMarkAsString(mark);
    }

    string CommandLineUI::getOccupiedMarkAsString(const Mark mark) {
        return (mark == X) ? XString : OString;
    }

    void CommandLineUI::askForTile(const Board &board) {
        m_Output << outputBoard(board) + newline + askForTileMessage + newline;
    }
}  // namespace training
