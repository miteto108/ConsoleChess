#ifndef _SQUARE_HEADER_
#define _SQUARE_HEADER_

#include <iostream>
#include <vector>
#include <string>


using namespace std;

enum TypeSquare{
    EnPass,Free,P,p,N,n,B,b,R,r,Q,q,K,k
};


class Square{
    short cordX;
    short cordY;
    TypeSquare type;

public:
    Square();
    Square(short x, short y);
    Square(short x, short y,TypeSquare t);

    short getX();
    short getY();
    TypeSquare getType();

    virtual vector<string> genmove(Square**,string) = 0;
};

Square::Square(){
    cordX=0;
    cordY=0;
    type=Free;
}

Square::Square(short x, short y){
    cordX=x;
    cordY=y;
    type=Free;
}

Square::Square(short x, short y,TypeSquare t){
    cordX=x;
    cordY=y;
    type=t;
}

TypeSquare Square::getType(){
    return type;
}

short Square::getX(){
    return cordX;
}

short Square::getY(){
    return cordY;
}





#endif //_SQUARE_HEADER_
