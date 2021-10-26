#pragma once
#include<vector>
#include<iostream>
class Game
{
private:
	char turn;
	std::vector<std::vector<char>> board;
	bool isDraw;
public:
	Game();
	char getTurn();
	void setTurn(char turn);
	void display_board();
	void game_phase();
	bool check_endGame();
	bool getIsDraw();
	void setIsDraw(bool isDraw);
};

