//TicTacToe.cpp contains the TicTacToe class methods, done(), draw(), prompt(), play(), turn().
//Also I added a few helper functions isEmpty(), isEqual(), getPiece() 
#include "TicTacToe.h"
#include "Header.h"
#include "Piece.h"
#include <iostream>
#include <vector>
#include <sstream>

string TicTacToe::PLAYER1 = "X";
string TicTacToe::PLAYER2 = "O";


TicTacToe::TicTacToe() :
GameBase(PLAYER1, PLAYER2, 5, 5, 3)
{

}

TicTacToe::~TicTacToe() {

}

void
TicTacToe::print() {
	cout << *this; 
}

bool 
TicTacToe::isValidPosition(unsigned int x, unsigned int y) {
	return (x >= 1 && x < _width - 1 &&
		y >= 1 && y < _height - 1);
}

bool
TicTacToe::done() {
	return isEqual(getPiece(1, 1), getPiece(2, 1), getPiece(3, 1)) ||	//check rows
		isEqual(getPiece(1, 2), getPiece(2, 2), getPiece(3, 2)) ||
		isEqual(getPiece(1, 3), getPiece(2, 3), getPiece(3, 3)) ||
		isEqual(getPiece(1, 1), getPiece(1, 2), getPiece(1, 3)) ||	//check columns
		isEqual(getPiece(2, 1), getPiece(2, 2), getPiece(2, 3)) ||
		isEqual(getPiece(3, 1), getPiece(3, 2), getPiece(3, 3)) ||
		isEqual(getPiece(1, 1), getPiece(2, 2), getPiece(3, 3)) ||	//check diagonals
		isEqual(getPiece(1, 3), getPiece(2, 2), getPiece(3, 1));
}

bool
TicTacToe::draw() {
	for (unsigned int i = 1; i < _width - 1; i++) {
		for (unsigned int j = 1; j < _height - 1; j++) {
			Piece& p = getPiece(i, j);
			if (p.isEmpty()) {
				return false;
			}
		}
	}
	return !done();
}




int
TicTacToe::turn() {
	moves += 1;
	if (draw()) {
		return 0;	//draw
	}
	unsigned int x, y;
	bool result = prompt(x, y);
	if (!result) {
		return 1; //quit
	}
	Piece& p = getPiece(x, y);
	p = currentPlayer;
	prevPlayer = currentPlayer;
	if (currentPlayer == player1) {
		currentPlayer = player2;
	}
	else {
		currentPlayer = player1;
	}
	prevPlay_x = x;
	prevPlay_y = y;
	return 2;	//valid 
}



bool
TicTacToe::isEmpty(const Piece& p) {
	return p.isEmpty();
}

Piece& 
TicTacToe::getPiece(unsigned int x, unsigned int y) {
	return gameboard->at(x * _width + y);
}

bool
TicTacToe::isEqual(Piece& p1, Piece& p2, Piece& p3) {
	return (!p1.isEmpty() && !p2.isEmpty() && !p3.isEmpty())
		&& (p1 == p2 && p1 == p3);
}

ostream& operator <<(ostream& ostrm, const TicTacToe& game) {

	for (unsigned int y = game._height; y > 0; y--) {
		ostrm << y - 1 << " ";
		for (unsigned int x = 0; x < game._width; x++) {
			int index = game._width * x + y - 1;
			const Piece& p = game.gameboard->at(index);
			ostrm << p.getSymbol() << " ";
		}
		ostrm << endl;
	}
	cout << "  ";
	for (unsigned int j = 0; j < game._width; j++) {
		ostrm << j << " ";
	}
	ostrm << endl;
	if (game.prevPlayer != game.currentPlayer) {
		ostrm << "Player " << game.prevPlayer.getSymbol();
	}
	for (unsigned int i = 1; i < game._width; i++) {
		for (unsigned int j = 1; j < game._height; j++) {

			unsigned int index = game._width * i + j;
			Piece& p1 = game.gameboard->at(index);
			if (p1 == game.prevPlayer) {
				ostrm << ": " << i << "," << j;
			}
		}
	}
	ostrm << endl;
	return ostrm;
}


