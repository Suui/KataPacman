#pragma once

#include <vector>
#include "BoardElement.h"


class State
{
	std::vector<BoardElement> World;
	int Rows;

public:

	State();

	State(std::string Input);
	
	int GetRows();
};
