// Copyright 2019 < 8th Light >

#include "TicTacToe.hpp"
#include "CommandLineUI.hpp"

int main() {
    training::CommandLineUI clui;
    int dimension = 3;
    training::TicTacToe ttt(&clui, dimension);

    ttt.start();

    return 0;
}  // namespace training
