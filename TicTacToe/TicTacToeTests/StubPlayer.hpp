// Copyright 2019 < 8th Light >

#pragma once

#include <vector>
#include "../TicTacToe/Mark.hpp"
#include "../TicTacToe/Player.hpp"

using std::vector;

namespace training {
    class StubPlayer : public Player {
    public:
        explicit StubPlayer(Mark mark);

        int getMove(const Board &board) override;

        void willSelectSpaces(vector<int> spaces);

    private:
        vector<int> m_SpacesToReturn;
        int m_CurrentIndex;
    };
}  // namespace training
