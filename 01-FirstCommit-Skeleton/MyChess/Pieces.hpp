#ifndef _PIECES_HEADER_
#define _PIECES_HEADER_

#include "Square.hpp"
#include "Board.hpp"

using namespace std;

class Free: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;
        return x;
    }

};

class Pawn: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;

    }

};

class Knight: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;

    }

};

class Bishop: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;

    }

};

class Rook: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;

    }

};

class Queen: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;

    }

};

class King: Square{
public:
    virtual vector<string> genmove(Square**,string){
        vector<string> x;
        return x;
    }

};



//vector<string> PawnMove(Board&){
//
//
//}
//
//vector<string> KnightMove(Board&){
//
//}
//
//vector<string> BishopMove(Board&){
//
//}
//
//vector<string> RookMove(Board&){
//
//}
//
//vector<string> QueenMove(Board&){
//
//}
//
//vector<string> KingMove(Board&){
//
//}

#endif // _PIECES_HEADER_
