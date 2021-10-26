// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "GameBase.h"
#include "TicTacToe.h"
#include "Header.h"
#include "Gomoku.h"
#include <sstream>

GameBase::GameBase() :
	GameBase("1", "2", 0, 0, 5)
{

}

GameBase::GameBase(
	const string& player1_id,
	const string& player2_id,
	unsigned int width,
	unsigned int height,
	unsigned int win_con)
{
	prevPlay_x = 0;
	prevPlay_y = 0;
	_width = width;
	_height = height;
	_win_con = win_con;
	player1 = Piece(player1_id);
	player2 = Piece(player2_id);
	prevPlayer = player1;
	currentPlayer = player1; 
	gameboard = NULL;
	if (width > 0 && height > 0) {
		gameboard = new vector <Piece>((width +1) * (height +1));
		for (unsigned int i = 0; i < width; i++) {
			for (unsigned int j = 0; j < height; j++) {
				Piece p;
				gameboard->at(width * i + j) = p;
			}
		}
	}
}

GameBase::~GameBase() {
	if (gameboard) {
		delete gameboard;
	}
}

Piece&
GameBase::getPiece(unsigned int x, unsigned int y) {
	return gameboard->at(x * _width + y);
}

int
GameBase::play() {
	print();
	while (true) {

		int result = turn();
		if (result == 2) {
			print();	//valid move
		}
		else if (result == 0) {
			cout << "Turns played: " << moves - 1 << endl;
			cout << "No moves remain. Game ends in a draw." << endl;
			return results::game_draw;
		}
		else if (result == 1) {	//quit
			cout << "Turns played: " << moves - 1 << endl;
			cout << "User has quit." << endl;
			return results::user_quit;
		}
		if (done()) {
			cout << "Player " << prevPlayer.getSymbol() << " won the game." << endl;
			return results::success;
		}

	}

}

GameBase*
GameBase::build(int argc, char* argv[]) {
	if (argc == 2) {
		string gameName(argv[1]);
		if (gameName == "TicTacToe") {
			return new TicTacToe();
		}
		else if (gameName == "Gomoku") {
			return new GomokuGame();
		}
	}
	return NULL;
}

bool
GameBase::prompt(unsigned int& x, unsigned int& y) {
	while (true) {
		string input;
		cout << "Enter [x,y] or quit: ";
		cin >> input;
		if (input == "quit") {
			return false;
		}
		for (unsigned int i = 0; i < input.size(); i++) {

			if (input[i] == ',') {
				input[i] = ' ';
			}
		}
		istringstream iss(input);
		unsigned int x_check, y_check;
		iss >> x_check;
		iss >> y_check;
		if (isValidPosition(x_check, y_check) &&
			getPiece(x_check,y_check).isEmpty()
			) {

			x = x_check;
			y = y_check;
			return true;
		}
	}
	return false;
}