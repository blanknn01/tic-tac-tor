#include<iostream>
#include"Game.h"
#include"Random_actor.h"
using namespace std;
int main()
{
    int choice;
    cout << "who do you want to play with"<<endl;
    cout << "1.Player vs Player"<<endl;
    cout << "2.Player vs Bot"<<endl;
    cin >> choice;
    if (choice == 1) {
        Game game;
        game.display_board();
        while (game.check_endGame()) {
            game.game_phase();
            game.check_endGame();
        }
        if (game.getTurn() == 'X' && game.getIsDraw() == false) {
            cout << "Second Player has won the game";
        }
        else if (game.getTurn() == 'O' && game.getIsDraw() == false) {
            cout << "First Player has won the game";
        }
        else
            cout << "Draw";
    }
    else {
        Random_actor bot;
            bot.display_board();
            while (bot.check_endGame()) {
                bot.game_phase();
                bot.check_endGame();
            }
            if (bot.getTurn() == 'X' && bot.getIsDraw() == false) {
                cout << "Bot has won the game";
            }
            else if (bot.getTurn() == 'O' && bot.getIsDraw() == false) {
                cout << "First Player has won the game";
            }
            else
                cout << "Draw";
    }
}