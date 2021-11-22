#ifndef __PARSE_HPP
#define __PARSE_HPP

#include "base.hpp"
#include <string>
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "power.hpp"
#include "div.hpp"
class Parse {
 
public:
   
   Base* parse(char** input, int length){
	
	if ( length % 2 ==0){
	  return nullptr;
	}
	else{
	try{
   	 Base* output = new Op(std::stod(input[0]));
	}
	catch(std::exception e){
  	  return nullptr;
	}
	}
	Base* output = new Op(std::stod(input[0]));
	for( int i = 1; i< length; ++i) {
	  if (std::string(input[i]) == "+"){
   	  	Base* second= new Op(std::stod(input[i+1]));
   	  	Base* add = new Add(output,second);
   	  	output = add;
	  }
          else if(std::string(input[i]) == "-"){
	        Base* second= new Op(std::stod(input[i+1]));
                Base* sub = new Sub(output,second);
                output = sub;		

	  } 
	  else if(std::string(input[i]) == "\*"){
                Base* second= new Op(std::stod(input[i+1]));
                Base* mult = new Mult(output,second);
                output = mult;

          }
	  else if(std::string(input[i]) == "/"){
                Base* second= new Op(std::stod(input[i+1]));
                Base* div = new Div(output,second);
                output = div;
	  }
	  else if(std::string(input[i]) == "\*\*"){
                Base* second= new Op(std::stod(input[i+1]));
                Base* pow = new Pow(output,second);
                output = pow;
          }
	}
	return output; 	
   }
};

#endif
