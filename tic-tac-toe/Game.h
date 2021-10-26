#pragma once
#include<vector>
#include<iostream>
class Game
{
private:
	std::vector<std::vector<char>> board;
public:
	Game();
	void display_board();
};

