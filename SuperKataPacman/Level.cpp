#include "Level.h"
#include "State.h"


Level::Level() {}


Level::Level(std::string Input)
{
	World = State(Input);
}


State Level::GetState()
{
	return World;
}