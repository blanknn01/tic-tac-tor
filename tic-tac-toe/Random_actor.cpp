#include "Random_actor.h"
Random_actor::Random_actor()
{
    isDraw = false;
    turn = 'X';
    board.resize(3, std::vector<char>(3));
    board[0][0] = '1';
    board[0][1] = '2';
    board[0][2] = '3';
    board[1][0] = '4';
    board[1][1] = '5';
    board[1][2] = '6';
    board[2][0] = '7';
    board[2][1] = '8';
    board[2][2] = '9';
}
char Random_actor::getTurn()
{
    return turn;
}
void Random_actor::setTurn(char turn)
{
    this->turn = turn;
}

bool Random_actor::getIsDraw()
{
    return isDraw;
}

void Random_actor::setIsDraw(bool isDraw)
{
    this->isDraw = isDraw;
}
void Random_actor::display_board() {
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[0][0] << "  | " << board[0][1] << "   |  " << board[0][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[1][0] << "  | " << board[1][1] << "   |  " << board[1][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[2][0] << "  | " << board[2][1] << "   |  " << board[2][2] << std::endl;
    std::cout << "     |     |     " << std::endl;
}

void Random_actor::game_phase()
{
    int choice;
    int i, j;
    if (getTurn() == 'X') {
        std::cin >> choice;
        switch (choice) {
        case 1: i = 0; j = 0; break;
        case 2: i = 0; j = 1; break;
        case 3: i = 0; j = 2; break;
        case 4: i = 1; j = 0; break;
        case 5: i = 1; j = 1; break;
        case 6: i = 1; j = 2; break;
        case 7: i = 2; j = 0; break;
        case 8: i = 2; j = 1; break;
        case 9: i = 2; j = 2; break;
        default:
            std::cout << "Please from 1 to 9";
        }

        if (getTurn() == 'X' && board[i][j] != 'X' && board[i][j] != 'O') {
            board[i][j] = 'X';
            setTurn('O');
        }
        else {
            std::cout << "Box already filled";
            game_phase();
        }

        display_board();
    }
    else {
        int choice = rand() % 10 + 1;
        switch (choice) {
        case 1: i = 0; j = 0; break;
        case 2: i = 0; j = 1; break;
        case 3: i = 0; j = 2; break;
        case 4: i = 1; j = 0; break;
        case 5: i = 1; j = 1; break;
        case 6: i = 1; j = 2; break;
        case 7: i = 2; j = 0; break;
        case 8: i = 2; j = 1; break;
        case 9: i = 2; j = 2; break;
        default:
            std::cout << "Please from 1 to 9";
        }
        if (getTurn() == 'O' && board[i][j] != 'X' && board[i][j] != 'O') {
            board[i][j] = 'O';
            setTurn('X');
        }
        else {
            game_phase();
        }
        display_board();
    }
}

bool Random_actor::check_endGame()
{
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return false;
        }
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return false;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return true;
            }
        }
    }
    setIsDraw(true);
    return false;
}


