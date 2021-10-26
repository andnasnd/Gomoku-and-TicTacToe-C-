#pragma once
#include <vector>
#include "Piece.h"

using namespace std;

class GameBase {
protected:
	unsigned int prevPlay_x;
	unsigned int prevPlay_y;
	unsigned int _width = 0;
	unsigned int _height = 0;
	unsigned int _win_con = 0;
	unsigned int max_length;
	int moves = 0;

	vector <Piece>* gameboard;
	Piece player1;
	Piece player2;
	Piece currentPlayer = player1;
	Piece prevPlayer = currentPlayer;
		
	bool prompt(unsigned int& x, unsigned int& y);

public:
	GameBase();
	GameBase(const string& player1_id, const string& player2_id, unsigned int width, unsigned int height, unsigned int _win_con);
	virtual ~GameBase();

	Piece&
		GameBase::getPiece(unsigned int x, unsigned int y);
	virtual void print() = 0;
	virtual bool draw() = 0;
	virtual bool done() = 0;
	virtual int turn() = 0;
	virtual bool isValidPosition(unsigned int x, unsigned int y) = 0;
	int play();

	static GameBase* build(int argc, char* argv[]);
};