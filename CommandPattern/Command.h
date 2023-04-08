#pragma once
#include <iostream>

/* ~~~ Properties of command pattern~~~
Encapsulates request as objects (wrap them as objects
Object orientated replacement for call backs */

/*Given these input Handler, it is called everyframe*/
//void inputHandler::handleInput()
//{
//	if (isPress(x)) jump();
//	else if (isPress(y)) fireGun();
//	else if (isPress(y)) fireGun();
//	else if (isPress(y)) fireGun();
//}

class Command
{
public:

	//Command();
	virtual void execute() = 0;// pure virtual function
	virtual ~Command() = default;

private:

};


//each action inherits from command
class JumpCommand: public Command
{
public:

	virtual void execute() { std::cout << "Jumping!" << std::endl; }

};

class FireCommand : public Command
{
public:
	virtual void execute() { std::cout << "Firing!" << std::endl; }
};


class InputHandler
{
public:
	InputHandler() = default;
	~InputHandler() = default;

	void handleInput();
	void handleInput(int command);

//private:
	Command* ButtonX;
	Command* ButtonY;
	//Command* ButtonA;
	//Command* ButtonB;

};

