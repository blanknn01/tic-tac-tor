#pragma once
#include<vector>
#include<iostream>
class Game
{
private:
	char turn;//for x or o
	std::vector<std::vector<char>> board;//board for the game
	bool isDraw;//checks for draw
public:
	/*
	* getters,setters,constructors
	* and methods that we will use
	*/
	Game();
	char getTurn();
	void setTurn(char turn);
	void display_board();//for displaying purpose
	void game_phase();// game itself
	bool check_endGame();//checks do we have winner
	bool getIsDraw();
	void setIsDraw(bool isDraw);
};

