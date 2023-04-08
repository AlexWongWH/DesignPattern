#include "Command2.h"


Command2* InputHandler2::handleInput(char command)
{
	
	if (command == 'x')
	{
		return this->ButtonX;
	}
	if (command == 'y')
	{
		return this->ButtonY;
	}

	return nullptr;
}
