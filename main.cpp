#include <iostream>

#include "base.hpp"
#include "mult.hpp" 
#include "div.hpp"
#include "op.hpp"
#include "power.hpp"
#include "sub.hpp"
#include "add.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(2);
    Base* four = new Op(6);
    //Base* two = new Op(2);
    //Base* mult = new Mult(seven, four);
    Base* add = new Add(three, seven);
    Base* multiply = new Mult(add, four);
    //((3+(7*4))-2) = 29
    std::cout << multiply->stringify() << " = " << multiply->evaluate() << std::endl;
    return 0;
}
