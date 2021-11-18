#ifndef __UNIT_TEST_HPP
#define __UNIT_TEST_HPP

#include "gtest/gtest.h"
#include "parse.hpp"

TEST(PrintTest, ParseFunc){
   Parse* test; 
   char input = '3';
   char inputt = '+';
   char inputtt = '2';
   char *input1 =&input;	
   char** input2 = &input1;
   Base* test1 = test->parse(input2,3);
EXPECT_EQ(test1->stringify(),"3 + 2");

}

#endif
