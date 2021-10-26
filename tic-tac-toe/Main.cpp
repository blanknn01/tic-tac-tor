#include<iostream>
#include"Game.h"
#include"Random_actor.h"
using namespace std;
int main()
{
    //asking the player about his decision
    int choice;
    cout << "who do you want to play with"<<endl;
    cout << "1.Player vs Player"<<endl;
    cout << "2.Player vs Bot"<<endl;
    cin >> choice;
    if (choice == 1) {
        Game game;//creating the game object
        game.display_board();//at the beginning displaying the board

        //until game ends it will check
        while (game.check_endGame()) {
            game.game_phase();
            game.check_endGame();
        }
        //checking which player won
        if (game.getTurn() == 'X' && game.getIsDraw() == false) {
            cout << "Second Player has won the game";
        }
        else if (game.getTurn() == 'O' && game.getIsDraw() == false) {
            cout << "First Player has won the game";
        }
 
        else
            cout << "Draw";
    }
    //same for the random actor
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