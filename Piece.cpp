#include "Piece.h"

Piece::Piece() {
	_symbol = "";
}

Piece::Piece(const std::string& symbol) {
	_symbol = symbol;
}

void
Piece::setSymbol(const std::string& symbol) {
	_symbol = symbol;
}


std::string
Piece::getSymbol() const {
	return _symbol.empty() ? " " : _symbol;
}

bool
Piece::operator==(const Piece& other) const {
	if (this == &other) {
		return true;
	}
	return _symbol == other._symbol;
}

bool
Piece::operator!=(const Piece& other) const {
	if (this == &other) {
		return false;
	}
	return _symbol != other._symbol;
}

bool
Piece::isEmpty() const {
	return _symbol.empty();
}

std::ostream& operator<<(std::ostream& out, const Piece& o) {
	out << o.isEmpty() ? " " : o._symbol;
	return out;
}