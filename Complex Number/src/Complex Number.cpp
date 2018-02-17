//============================================================================
// Name        : Complex.cpp
// Author      : Reza
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex c1;
    Complex c2(2,3);

    Complex c3 = c2;
    c3.print();
    if(c3 == c2){
    	c3 = c1 + 2 + c2 +3.2;
    }




    c3.print();
    cout << c3 << c2 << c1 << endl;

	Complex c4(4,6);
	Complex c5(4,5);

	if(c4 == c5){
		cout << c4 << "Equal" << c5 << endl;
	}

	if(c4 != c5){
	    cout << c4 << "Not Equals" << c5 << endl;
	}
    //Conjugate a complex number
	cout << *c4  << endl;
	return 0;
}
