#include <iostream>

#include "base.hpp"
#include "parse.hpp"

int main(int argc, char** argv) {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    
    Parse* p; 
    Base* test = p->parse(argv+1,argc-1); 
    std::cout << test->stringify() << " = " << test->evaluate() << std::endl;
    
    return 0;
}
