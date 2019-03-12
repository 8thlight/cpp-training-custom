// Copyright 2019 < 8th Light >

#pragma once

#include <memory>

#include "CommandLineUI.hpp"
#include "Game.hpp"
#include "HumanPlayer.hpp"
#include "Player.hpp"
#include "RandomPlayer.hpp"
#include "UI.hpp"

using std::array;
using std::unique_ptr;
using std::make_unique;

namespace training {
    class TicTacToe {
    public:
        explicit TicTacToe(UI & const UI, int dimension);

        void start();

    private:
        UI & const m_UI;
        int m_Dimension;

        array<unique_ptr<Player>, 2> makePlayers(int mode);
    };
}  // namespace training
