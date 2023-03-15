#ifndef _SQUARE_TESTS_
#define _SQUARE_TESTS_

#include "Square.hpp"


#include "../MyChessTesting/catch2.hpp"

//REQUIRE();
//SECTION(""){}
//REQUIRE_NOTHROW();
//REQUIRE_THROWS();


TEST_CASE("Square","[square]"){

    SECTION("EnumTypeSq"){
        TypeSquare a1=EnPass,a2=Free,a3=P,a4=p,a5=N,a6=b,a7=Q,a8=r,a9=K,a10=q,a11=k,a12=n,a13=B,a14=R;
        REQUIRE(a1==0);
        REQUIRE(a1!=1);
        REQUIRE(a2==1);
        REQUIRE(a3==2);
        REQUIRE(a4==3);
        REQUIRE(a5==4);
        REQUIRE(a6==7);
        REQUIRE(a7==10);
        REQUIRE(a8==9);
        REQUIRE(a9==12);
        REQUIRE(a10==11);
        REQUIRE(a11==13);
        REQUIRE(a12==5);
        REQUIRE(a13==6);
        REQUIRE(a14==8);

    }


}


#endif

