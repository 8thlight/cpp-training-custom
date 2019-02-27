#include "TicTacToe.hpp"

using namespace training;

int main() {
    UI ui(cin, cout, 1500);
    TicTacToe ttt(ui, 3);

    ttt.start();

    return 0;
}