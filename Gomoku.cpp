#include "Gomoku.h"
#include "Header.h"
#include "GameBase.h"
#include <math.h>
#include <algorithm>
#include <iostream>
#include <iomanip>

string GomokuGame::PLAYER1 = "B";
string GomokuGame::PLAYER2 = "W";

GomokuGame::GomokuGame()
	: GameBase(PLAYER1, PLAYER2, 19, 19, 5) {


}

GomokuGame::~GomokuGame()
{

}

void
GomokuGame::print() {
	cout << *this;
}

bool
GomokuGame::isValidPosition(unsigned int x, unsigned int y) {
	return (x >= 1 && x <= _width &&
		y >= 1 && y <= _height);
}


bool
GomokuGame::done() {
	unsigned int x = prevPlay_x;
	unsigned int y = prevPlay_y;
	Piece& p = getPiece(x, y);
	unsigned int count = 1;			//current Piece
	for (unsigned int i = x + 1; i <= _width; i++) {						//horizontal right
		Piece& other = getPiece(i, y);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}
	}
	for (unsigned int i = x - 1; i > 0; i--) {			//horizontal left
		Piece& other = getPiece(i, y);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}
	}
	count = 1; 
	for (unsigned int i = x + 1; i <= _height; i++) {						//vertical up
		Piece& other = getPiece(x, i);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}
	}
	for (unsigned int i = x - 1; i > 0; i--) {			//vertical down
		Piece& other = getPiece(x, i);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}
	}

	unsigned int i = x+1;				//right diagonal
	unsigned int j = y+1; 
	while (i <= _width && j <= _height) {
		Piece& other = getPiece(i, j);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
			i++; 
			j++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true; 
		}

	}
	i = x - 1;
	j = y - 1;

	while (i > 0 && j > 0) {
		Piece& other = getPiece(i, j);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
			i--;
			j--;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}

	}

	count = 1;
	i = x - 1;				//left diagonal
	j = y + 1;
	while (i > 0 && j <= _height) {
		Piece& other = getPiece(i, j);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
			i--;
			j++;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}

	}
	i = x + 1;
	j = y - 1;

	while (i <= _width && j > 0) {
		Piece& other = getPiece(i, j);
		if (other.isEmpty()) {
			break;
		}
		if (other == p) {
			count++;
			i++;
			j--;
		}
		else {
			break;
		}
		if (count == _win_con) {
			return true;
		}

	}

	return false;
}

bool
GomokuGame::draw() {
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
GomokuGame::turn() {
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

ostream& operator <<(ostream& ostrm, const GomokuGame& game) {
//	ostrm << std::setw(2);

	for (unsigned int y = game._height + 1; y > 1; y--) {
		ostrm << setw(3) << y - 1;
		for (unsigned int x = 1; x < game._width + 1; x++) {
			int index = game._width * x + y - 1;
			const Piece& p = game.gameboard->at(index);
			ostrm << setw(3) << p.getSymbol();
		}
		ostrm << endl;
	}
	cout << setw(3) << "X";
	//ostrm << "X";
	for (unsigned int j = 1; j < game._width + 1; j++) {
		ostrm << setw(3) << j;
	}
	ostrm << endl;
	if (game.prevPlayer != game.currentPlayer) {
		ostrm << "Player " << game.prevPlayer.getSymbol();
	}
	for (unsigned int i = 1; i <= game._width; i++) {
		for (unsigned int j = 1; j <= game._height; j++) {
			int index = game._width * i + j;
			Piece& p1 = game.gameboard->at(index);
			if (!p1.isEmpty() && p1 == game.prevPlayer) {
				ostrm << ": " << i << "," << j;
			}
		}
	}
	ostrm << endl;
	return ostrm;
}
