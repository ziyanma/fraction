#include "fraction.h"
#include <iostream>

using namespace std;

fraction::fraction(){
	a=0;
	b=1;
}

fraction::~fraction(){

}

fraction::fraction(int no,de){
	a=no;
	b=de;
}

void fraction::print(){
	cout<<a<<"/"<<b;
}

void fraction::simplify(){
	
}