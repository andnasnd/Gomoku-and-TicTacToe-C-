#pragma once
#include <vector>
#include <ostream>
#include "GameBase.h"
using namespace std;

class TicTacToe : public GameBase {
private:
	Piece currentPlayer = player1;
	Piece prevPlayer = currentPlayer;
	bool isEqual(Piece& p1, Piece& p2, Piece& p3);
	bool isEmpty(const Piece& p);

protected:
	Piece& TicTacToe::getPiece(unsigned int x, unsigned int y);

public:

	static string PLAYER1;
	static string PLAYER2;

	TicTacToe();
	~TicTacToe();

	bool done();
	bool draw();
	int turn();
	void print();
	bool isValidPosition(unsigned int x, unsigned int y) override;

	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& o);

};
