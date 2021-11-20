#ifndef __PARSE_HPP
#define __PARSE_HPP

#include "base.hpp"
#include <string>
#include "op.hpp"
#include "add.hpp"


class Parse {
public:
   
   Base* parse(char** input, int length){
	
	if ( length % 2 ==0){
	  return nullptr;
	}
	else {
	try{
   	Base*  output = new Op(std::stod(input[0]));
	}
	catch(std::exception e){
  	  return nullptr;
	}
	}
	if (length > 2 && std::string(input[1]) == "+"){
	  Base* output = new Op(std::stod(input[0]));
   	  Base* second= new Op(std::stod(input[2]));
   	  Base* add = new Add(output,second);
   	  return add;
	}
	
   }
};

#endif
