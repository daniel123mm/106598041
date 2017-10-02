#ifndef VAR_H
#define VAR_H
#include <string>
#include "Term.h"



using std::string;
using std::to_string;

class Var :public Term{ 
	public:
		Var (string s) : Term(s){}
		bool match(Term *t){
			if(assignable){
				symbol() = t->symbol();
				assignable = false;
				return true;
			}else{
				if(symbol() == t->symbol())
					return true;
				else
					return false;
			}
		}
	private:
		bool assignable = true;
};

#endif