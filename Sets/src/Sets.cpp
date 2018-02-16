//============================================================================
// Name        : Sets.cpp
// Author      : Reza
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

class Test{
	int id;
	string name;
public:
	Test(){
		id = 0;
		name = "";
	}

	Test(int id, string name): id(id), name(name){

	}

	void print() const{
		cout << id <<":" << name << endl;
	}

	bool operator<(const Test &other) const {
		return name < other.name;
	}
};

int main() {

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(40);
	numbers.insert(30);
	numbers.insert(30);

	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++){

	     cout << "set member: " << *it << endl; // prints !!!Hello World!!!
	}

	set<int>::iterator itFind = numbers.find(30);
	if(itFind != numbers.end()){
		cout << "Found:" << *itFind << endl;
	}

	if(numbers.count(40)){
		cout << "number 40 is avalabel" << endl;
	}

	set<Test> test;
	test.insert(Test(10, "reza"));
	test.insert(Test(20, "amir"));
	test.insert(Test(30, "omid"));
	test.insert(Test(30, "arash"));

	for(set<Test>::iterator it = test.begin(); it != test.end(); it++){
		it->print();
	}

	return 0;
}
