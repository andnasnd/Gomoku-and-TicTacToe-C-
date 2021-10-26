//Main header file containing arg and result enums (for usage msg)
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <ostream>
using namespace std;

enum args {
	program_name, input_file, arg_num, wrong_arg, wrong_name
};

enum results {
	success,
	failure,
	game_draw,
	user_quit,
	command_line_error,
	invalid_color,
	empty_line,
	empty_dimension,
	cannot_read_dimensions,
	failed_to_read_line,
	failed_to_open_file,
	wrong_dimension,
	no_file_name,
	wrong_number_arguments,
	notExtract,
	noPiecestoRead,
	notRead,
	notOpen
};

int usageMsg(char* program_name);

