//Header file for Piece class, which contains just a symbol for this lab
#pragma once
#include <string>
#include <iostream>

class Piece {
private:
	std::string _symbol;

public:
	Piece();
	Piece(const std::string& symbol);

	void setSymbol(const std::string& symbol);
	std::string getSymbol() const;

	bool operator==(const Piece& other) const;
	bool operator!=(const Piece& other) const;

	bool isEmpty() const;

	friend std::ostream& operator<<(std::ostream& out, const Piece& o);
};
