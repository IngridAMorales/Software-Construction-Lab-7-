#ifndef __PARSE_HPP
#define __PARSE_HPP

#include "base.hpp"
#include <string>
#include "op.hpp"


class Parse {
  public:

   Base* parse(char** input, int length){

  for(int i =0;i<length;++i){

if (isdigit(std::atoi(input[i]))){
   Base* num = new Op(std::stod(input[i]));
	return num;
       }
else{
  Base* res = new Op(3);
	return res;
}
/*
  else if (input.at(i)=="+"){
	return;
     }
else if (input.at(i)=="-"){
	return;
}
else if (input.at(i)=="\*"){
	return;
}
else if (input.at(i)=="/"){
	return;	
}
else if (input.at(i)=="\*\*"){
	return;
}
else{
return;
}
*/

};

#endif
