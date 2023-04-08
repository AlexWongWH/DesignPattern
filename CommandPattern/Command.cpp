#include "Command.h"




void InputHandler::handleInput()
{
	//	if (isPress(x)) jump();
	//	else if (isPress(y)) fireGun();
	//	else if (isPress(y)) fireGun();
	//	else if (isPress(y)) fireGun();
}


void InputHandler::handleInput(int command)
{
	if (command == 0)
	{
		std::cout << "inside !\n";
		//static_cast<JumpCommand*>(ButtonX)->execute();
		ButtonX->execute();
	}
	if (command == 1)
		ButtonY->execute();
}
