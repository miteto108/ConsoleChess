#ifndef _COMMAND_INTERFACE_HEADER_
#define _COMMAND_INTERFACE_HEADER_

#include "Square.hpp"
#include "Pieces.hpp"
#include "Board.hpp"

using namespace std;

class CommandInterface{

    string comm;

public:
    CommandInterface();// Default Constructor empty instruction
    CommandInterface(string str);// Constructs a command by a string

//    void Normalize();

    void Help1();// Prints a brief tutorial on chess and how to operate with this program
    void Help2();// Prints how to use file functionality
    void Start(Board&);// Starts a game from the beginning position
    void Show(Board&);// Shows the legal moves of the player on turn
    void Engine(Board&);// Makes the next move
    void EngineOn(Board&);// Every time you make a move the engine will make the next one
    void EngineOff(Board&);// Turns off the engine
    void Undo(Board&);// Turns back a move
    void SavePos(std::string,Board&);// Saves the current position in a file

//    void Open();
//    void Save();
//    void SaveAs();
//    void Close();
//    void HelpArg();
//    void Exit();


    void ExecuteOper(Board&);// Executes the command
};

CommandInterface::CommandInterface(){

}

CommandInterface::CommandInterface(string str){

}

void CommandInterface::Help1(){

}

void CommandInterface::Help2(){

}

void CommandInterface::Start(Board&){

}

void CommandInterface::Show(Board&){

}

void CommandInterface::Engine(Board&){

}

void CommandInterface::EngineOn(Board&){

}

void CommandInterface::EngineOff(Board&){

}

void CommandInterface::Undo(Board&){

}

void CommandInterface::SavePos(std::string,Board&){

}
void CommandInterface::ExecuteOper(Board&){

}



#endif // _COMMAND_INTERFACE_HEADER_
