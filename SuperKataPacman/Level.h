#pragma once

#include <string>
#include "State.h"


class Level
{
	State World;

public:

	Level();

	Level(std::string Input);
	
	State GetState();
};
