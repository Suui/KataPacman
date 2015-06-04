#include "State.h"
#include "BoardElement.h"


State::State()
{
		
}


State::State(std::string Input)
{
	World = std::vector<BoardElement>();
	Rows = 1;

	for (unsigned int i = 0; i < Input.length(); ++i)
	{
		if (Input.at(i) == ' ')
		{
			Rows++;
			continue;
		}
		World.push_back(Input.at(i));
	}
}


int State::GetRows()
{
	return Rows;
}