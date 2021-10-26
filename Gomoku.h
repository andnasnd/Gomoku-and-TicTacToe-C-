#pragma once
#include "GameBase.h"
#include <string>
#include <iostream>

class GomokuGame : public GameBase {
public:
	GomokuGame();
	virtual ~GomokuGame();

	bool done() override;
	bool draw() override;
	int turn() override;
	void print() override;
	bool isValidPosition(unsigned int x, unsigned int y) override; 

	static string PLAYER1;
	static string PLAYER2; 

	friend std::ostream& operator<<(std::ostream& out, const GomokuGame& o);

};
