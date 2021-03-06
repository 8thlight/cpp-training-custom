// Copyright 2019 < 8th Light >

#pragma once

#include "Board.hpp"
#include "Player.hpp"
#include "UI.hpp"

namespace training {
    class Game {
    public:
        Game(Player & const playerOne,
            Player & const playerTwo,
            UI & const UI, const int dimension);

        void play();

        bool isGameOver();

    private:
        Board m_Board;
        Player & const m_PlayerOne;
        Player & const m_PlayerTwo;
        UI & const m_UI;

        void playAllTurns(Player *activePlayer);

        void playTurn(Player *activePlayer);

        void announceResult(Player *activePlayer);

        Player *alternate(Player *activePlayer);
    };
}  // namespace training
