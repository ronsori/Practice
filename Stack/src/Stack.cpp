//============================================================================
// Name        : Stack.cpp
// Author      : Reza
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

class Test{
	string name;

public:
	Test(){
		//cout << "constructor 1" << endl;
	}
	Test(string name): name(name){
		//cout << "constructor 2" << endl;
	}
	~Test(){
       //cout << "object destroyed!" << endl;
	}
	void print(){
		cout << name << endl;
	}
};
int main() {
	stack<Test> tStack;

	tStack.push(Test("Reza"));
	tStack.push(Test("Omid"));
	tStack.push(Test("Amir"));

/***************************CAREFULL************************
// This is wrong because the object which t1 references to that, is destroyed by pop().
// and t1.print() is working with a destroyed referenece memory

	Test& t1 = tStack.top();
	tStack.pop();
	t1.print();
/*********************************************************/

	while(tStack.size() > 0 ){
		Test &test = tStack.top();
		test.print();
		tStack.pop();

	}

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
