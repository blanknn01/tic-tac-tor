#include "Game.h"

Game::Game()
{

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
void Game:: display_board() {
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
