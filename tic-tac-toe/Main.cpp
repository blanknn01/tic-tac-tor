#include<iostream>
#include"Game.h"
using namespace std;
int main()
{
    Game game;
    game.display_board();
    while (game.check_endGame()) {
        game.game_phase();
        game.check_endGame();
    }
    if (game.getTurn() == 'X' && game.getIsDraw() == false) {
        cout <<"Second Player has won the game";
    }
    else if (game.getTurn() == 'O' && game.getIsDraw() == false) {
        cout << "First Player has won the game";
    }
    else
        cout << "Draw";
}