#pragma once
#include <iostream>

//functions are implemented by the actor
class GameActor
{
public:

	virtual void jump() { std::cout << "GameActor jumping!" << std::endl; };
	virtual void firing() { std::cout << "GameActor firing!\n"; };
};


class Player : public GameActor
{
public:

	void jump() { std::cout << "Player jumping!" << std::endl; };
	void firing() { std::cout << "PLayer firing!\n"; };
};

class Enemy : public GameActor
{
public:

	void jump() { std::cout << "Enemy jumping!" << std::endl; };
	void firing() { std::cout << "Enemy firing!\n"; };
};



//void class 
class Command2
{
public:

	virtual void execute(GameActor& actor) = 0; // acting upon the actor
	virtual ~Command2() {};
};

class JumpCommand2 : public Command2
{
public:

	virtual void execute(GameActor& actor)
	{ 
		actor.jump();
	}

};

class FireCommand2 : public Command2
{
public:
	virtual void execute(GameActor& actor)
	{
		actor.firing();
	}

};



class InputHandler2
{
public:
	InputHandler2() = default;
	~InputHandler2() = default;

	Command2* handleInput(char command);

	//private:
	Command2* ButtonX;
	Command2* ButtonY;

};
