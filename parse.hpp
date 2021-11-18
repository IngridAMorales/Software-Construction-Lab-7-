#ifndef __PARSE_HPP
#define __PARSE_HPP

#include "base.hpp"
#include <string>
#include "op.hpp"
#include "add.hpp"


class Parse {

private:

Base* output;
  public:

   Base* parse(char** input, int length){
if (length%2 ==0){
	return nullptr;
}
try{
   output = new Op(std::stod(input[0]));
}
catch(std::exception e){
  return nullptr;
}
int i =1;
if (std::string(input[i]) == "+"){
   Base* second= new Op(std::stod(input[i+1]));
   Base* add = new Add(output,second);
   return add;
}
/*
 *   else if (input.at(i)=="+"){
 *   	return;
 *   	     }
 *   	     else if (input.at(i)=="-"){
 *   	     	return;
 *   	     	}
 *   	     	else if (input.at(i)=="\*"){
 *   	     		return;
 *   	     		}
 *   	     		else if (input.at(i)=="/"){
 *   	     			return;	
 *   	     			}
 *   	     			else if (input.at(i)=="\*\*"){
 *   	     				return;
 *   	     				}
 *   	     				else{
 *   	     				return;
 *   	     				}
 *   	     				*/
}
};

#endif
