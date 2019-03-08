// Copyright 2019 < 8th Light >

#pragma once

#include <memory>
#include "UI.hpp"
#include "CommandLineUI.hpp"
#include "Player.hpp"
#include "HumanPlayer.hpp"
#include "Game.hpp"
#include "RandomPlayer.hpp"

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
