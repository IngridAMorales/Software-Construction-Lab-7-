#ifndef UNIT_TEST_HPP
#define UNIT_TEST_HPP

#include "gtest/gtest.h"
#include "parse.hpp"

TEST(PrintTest, ParseFunc){
   char* test_val[4]; test_val[0] = "./test"; test_val[1] = "3";test_val[2] = "+"; test_val[3] = "2";
  
    Parse* p;
    Base* test = p->parse(test_val+1,3); 
EXPECT_EQ(test->stringify(),"(3+2)");
EXPECT_EQ(test->evaluate(), 5); 
}
TEST(PrintTest,LongParse){ 
char* test_val[6]; test_val[0] = "./test"; test_val[1] = "3";test_val[2] = "+"; test_val[3] = "2";test_val[4]= "\*"; test_val[5]="3"; 

    Parse* p;
    Base* test = p->parse(test_val+1,5);
EXPECT_EQ(test->stringify(),"((3+2)*3)");
EXPECT_EQ(test->evaluate(), 15);
}
TEST(PrintTest,NegParse){
char* test_val[6]; test_val[0] = "./test"; test_val[1] = "-3";test_val[2] = "+"; test_val[3] = "-2";test_val[4]= "\*"; test_val[5]="3";

    Parse* p;
    Base* test = p->parse(test_val+1,5);
EXPECT_EQ(test->stringify(),"((-3+-2)*3)");
EXPECT_EQ(test->evaluate(), -15);
}
TEST(PrintTest,Evenlength){
char* test_val[5]; test_val[0] = "./test"; test_val[1] = "+"; test_val[2] = "2";test_val[3]= "\*"; test_val[4]="3";

    Parse* p;
EXPECT_EQ( p->parse(test_val+1,4), nullptr); 
}
TEST(PrintTest, DivParse){
char* test_val[6]; test_val[0] = "./test"; test_val[1] = "3";test_val[2] = "+"; test_val[3] = "3";test_val[4]= "/"; test_val[5]="3";

    Parse* p;
    Base* test = p->parse(test_val+1,5);
EXPECT_EQ(test->stringify(),"((3+3)/3)");
EXPECT_EQ(test->evaluate(), 2);
}
TEST(PrintTest,PowParse){
char* test_val[6]; test_val[0] = "./test"; test_val[1] = "-3";test_val[2] = "+"; test_val[3] = "-2";test_val[4]= "\*\*"; test_val[5]="3";

    Parse* p;
    Base* test = p->parse(test_val+1,5);
EXPECT_EQ(test->stringify(),"((-3+-2)**3)");
EXPECT_EQ(test->evaluate(), -125);
}
TEST(PrintTest,SubParse){
char* test_val[6]; test_val[0] = "./test"; test_val[1] = "3";test_val[2] = "-"; test_val[3] = "2";test_val[4]= "\*"; test_val[5]="3";

    Parse* p;
    Base* test = p->parse(test_val+1,5);
EXPECT_EQ(test->stringify(),"((3-2)*3)");
EXPECT_EQ(test->evaluate(), 3);
}
TEST(PrintTest,EvenlengthOp){
char* test_val[5]; test_val[0] = "./test"; test_val[1]= "3"; test_val[2] = "+"; test_val[3] = "2";test_val[4]= "\*";

    Parse* p;
EXPECT_EQ( p->parse(test_val+1,4), nullptr);
}

#endif
