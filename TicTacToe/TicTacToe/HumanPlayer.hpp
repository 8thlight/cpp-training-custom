// Copyright 2019 < 8th Light >

#pragma once

#include "Board.hpp"
#include "CommandLineUI.hpp"
#include "Mark.hpp"
#include "Player.hpp"
#include "UI.hpp"

namespace training {
    class HumanPlayer : public Player {
    public:
        explicit HumanPlayer(Mark mark, UI & const UI);

        int getMove(const Board &board) override;

    private:
        UI &m_UI;
    };
}  // namespace training
