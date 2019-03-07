#include "TicTacToe.hpp"
#include "CommandLineUI.hpp"

using namespace training;

int main() {
    CommandLineUI clui;
    int dimension = 3;
    TicTacToe ttt(clui, dimension);

    ttt.start();

    return 0;
}
// namespace training
