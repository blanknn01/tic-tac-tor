#pragma once
#include<vector>
#include<iostream>
#include<ctime>
class Random_actor
{
private:
	char turn;
	std::vector<std::vector<char>> board;
	bool isDraw;
public:
	Random_actor();
	char getTurn();
	void setTurn(char turn);
	void display_board();
	void game_phase();
	bool check_endGame();
	bool getIsDraw();
	void setIsDraw(bool isDraw);
};

