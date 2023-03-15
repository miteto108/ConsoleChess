#ifndef _BOARD_HEADER_
#define _BOARD_HEADER_

#include "Square.hpp"
#include "Pieces.hpp"

using namespace std;

class Board{
    bool turn;// 0-white, 1-black
    string enpassant;// "-"-for no enpassant square "e3"-for e3 is ok for enpassant
    string casteling;// "KQkq", "--k-" shows available castel
    string fen;// FEN of the position
    Square** board;// The board
    bool engineOnOff=0;// if engine is on it imitates a game vs an engine// 0-Off , 1-On

public:
    Board();// Default constructor generates the starting position
    Board(string fen);// Creates a position from the fen
    ~Board();// Destructor
    Board(Board&);// Copy constructor
    Board& operator=(Board&);// Copy assignment operator

    bool getTurn();
    string getEnpassant();
    string getCateling();
    string getFEN();
    Square** getBoard();
    bool getEngine();


    bool isChecked();// If the side who's turn is is in check
    bool isCheckMated();// If the side who's turn is is checkmated
    bool isStaleMated();//If the side who's turn is is stalemated
    bool isPositionLegal();// Checks if the position is legal
    bool isPosition3FoldRepetition();// Checks whether there is a draw by repeating the position 3 times
    vector<string> genMoves();// Generates the possible moves in a vector of strings
    void prGenMoves();// Prints the possible moves

    bool IsFenValid(std::string);// Checks whether the fen is valid format

    void PrintToConsole();// Prints the current board


    void ShowValidMoves();// Prints legal moves
    std::string* ValidMoves();// Returns array of legal moves
    bool isMoveLegal(std::string);// Checks weather the move exist in the position

    void MakeMove(std::string);// Makes the move, changes the position

    double countMaterial();// Counts the balance of material
    void engine();// makes the next move
};

Board::Board(){

}

Board::Board(string fen){

}

Board::~Board(){

}

Board::Board(Board&){

}

Board& Board::operator=(Board&){

}

bool Board::getTurn(){

}

string Board::getEnpassant(){

}

string Board::getCateling(){

}

string Board::getFEN(){

}

Square** Board::getBoard(){

}

bool Board::getEngine(){

}

bool Board::isChecked(){

}

bool Board::isCheckMated(){

}

bool Board::isStaleMated(){

}

bool Board::isPositionLegal(){

}

bool Board::isPosition3FoldRepetition(){

}

vector<string> Board::genMoves(){

}

void Board::prGenMoves(){

}

bool Board::IsFenValid(std::string){

}

void Board::PrintToConsole(){

}

void Board::ShowValidMoves(){

}

std::string* Board::ValidMoves(){

}

bool Board::isMoveLegal(std::string){

}

void Board::MakeMove(std::string){

}

double Board::countMaterial(){

}

void Board::engine(){

}

#endif // _BOARD_HEADER_
