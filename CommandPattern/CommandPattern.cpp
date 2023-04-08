// CommandPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Command.h"
#include "Command2.h"

int main()
{
    std::cout << "start of command pattern!\n";

    InputHandler i_Handle{};
    JumpCommand jump{};
    
    i_Handle.ButtonX = &jump;
    i_Handle.handleInput(0); //ask this

    
    InputHandler2 Handler2;
    //XHandler2.ButtonX = static_cast<Command2*>(&JumpCommand2 temp)
    JumpCommand2 j2;
    FireCommand2 f2;


    //Input handler decide what the button does
    Handler2.ButtonX = &j2;
    Handler2.ButtonY = &f2;

    GameActor actor;
    Player play;
    Enemy enemy;

    Command2* commandToExecute = Handler2.handleInput('x'); //handler pass in the commands
    if (commandToExecute)
    {
        //commandToExecute->execute(static_cast<GameActor*>(&play));
        commandToExecute->execute(actor);
        commandToExecute->execute(play);
        commandToExecute->execute(enemy);
    }
    commandToExecute = Handler2.handleInput('y'); //handler pass in the commands
    commandToExecute->execute(actor);
    commandToExecute->execute(play);
    commandToExecute->execute(enemy);

}

