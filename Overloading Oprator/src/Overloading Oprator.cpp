//============================================================================
// Name        : Overloading.cpp
// Author      : Reza
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
	int id;
	string name;

public:
	Test(int id, string name): id(id), name(name){

	}
	~Test(){

	}

	void print(){
		cout << id << " : " << name << endl;
	}

	const Test &operator=(const Test &other){
		cout << "Assignment operator" << endl;
		id =  other.id;
		name = other.name;
		return *this;
	}

	Test(const Test &other)
	{
		cout << "Copy Constructor Running" << endl;
		id =  other.id;
	    name = other.name;
	}

	friend ostream &operator<<(ostream &out, const Test &test)
	{
		//cout << "overload oprator <<" << endl;
		out << test.name << ":" << test.id << endl;
		return out;
	}
};
int main() {
	Test t1(3,"Kian");
	t1.print();

	Test t2(20,"reza");
	Test t3 = t2;
	t2.operator=(t1);

	t2.print();
	cout << endl;



	cout << t3 << endl;
	return 0;
}
