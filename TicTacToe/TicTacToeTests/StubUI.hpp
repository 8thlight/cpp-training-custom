// Copyright 2019 < 8th Light >

#pragma once

#include <vector>
#include <string>
#include "../TicTacToe/Board.hpp"
#include "../TicTacToe/Mark.hpp"
#include "../TicTacToe/UI.hpp"

namespace training {
    class StubUI : public UI {
    public:
        explicit StubUI(vector <string> mockInputs = { "" });

        int getValidMove(const Board &) override;

        void welcome() override;

        void displayMove(const Board &) override;

        void announceWinner(Mark) override;

        void announceDraw() override;

        void announceInvalidInput() override;

        int getValidMode() override;

        bool wasWinAnnounced();

        bool wasDrawAnnounced();

    private:
        vector <string> m_MockInputs;
        int m_InputCounter;
        bool m_WinAnnounced;
        bool m_DrawAnnounced;
    };
}  // namespace training
