#ifndef __OPERATOR_HPP__
#define __OPERATOR_HPP__

#include "base.hpp"
#include <stdexcept>

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

class FourOpMock: public Base {
    public:
   	FourOpMock() { }

        virtual double evaluate() { return 4.5; }
        virtual std::string stringify() { return "4.5"; }
};

class ZeroOpMock: public Base {
   public: 
	ZeroOpMock() { }

	virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.0"; }
}; 
class NegOpMock: public Base {
   public: 
	NegOpMock() { }

	virtual double evaluate() { return -7.5; }
	virtual std::string stringify() { return "-7.5"; }
};


class TwoOpMock: public Base {
   public:
        TwoOpMock() { }

        virtual double evaluate() { return 2.0; }
        virtual std::string stringify() { return "2.0"; }
};

class Div : public Base {
	private:
	  Base* left;
	  Base* right;

	public:
	  Div(Base* op1, Base* op2) : Base(){
		left = op1;
		right = op2;
}
	virtual double evaluate(){
		 return this->left->evaluate() / this->right->evaluate(); 
}
	   virtual std::string stringify() {
		return "("+ this->left->stringify()+ " / "+ this->right->stringify()+ ")"; 
	}
};
  
class Mult : public Base { 
	private: 
	   Base* left; 
	   Base* right; 
	public: 
	   Mult(Base* op1, Base* op2) : Base() {
		      left = op1; 
	        right = op2; 
	   }

	   virtual double evaluate() {
	   	return this->left->evaluate() * this->right->evaluate(); 
	   }
	   virtual std::string stringify() {
		return "("+ this->left->stringify()+ "*"+ this->right->stringify()+ ")";  
	   }
};












#endif 
