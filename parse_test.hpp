#ifndef __UNIT_TEST_HPP
#define __UNIT_TEST_HPP

#include "gtest/gtest.h"
#include "parse.hpp"

TEST(PrintTest, ParseFunc){
   Factory* test; 
   Base* test1 = test->parse("4 * 3",3);
EXPECT_EQ(test1->stringify(),"4");

}

#endif
