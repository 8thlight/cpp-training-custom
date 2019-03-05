#pragma once

#include <vector>
#include <string>
#include "Board.hpp"
#include "Mark.hpp"
#include "UI.hpp"

using namespace std;

namespace training {
    class UIStub : public UI {
    public:
        explicit UIStub(vector <string> mockInputs = {""});

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
}