#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include "TicTacToe.h"
#include "Header.h"
using namespace std;

int usageMsg(char* program_name) {
	cout << "usage: " << program_name << "<TicTacToe or Gomoku>" << endl;
	return args::wrong_arg;
}



int main(int argc, char* argv[])
{
	if (argc != 2){
		usageMsg(argv[0]);
		return 1;
	}
	shared_ptr<GameBase> gb(GameBase::build(argc, argv));
	if (gb == NULL) {
		return command_line_error;
	}
	return gb->play();
}
