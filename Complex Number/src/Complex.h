/*
 * Complex.h
 *
 *  Created on: Feb 17, 2018
 *      Author: Reza
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>
using namespace std;

class Complex {
	double real;
	double imaginary;
public:
	Complex();
	Complex(double r, double i);
	Complex(const Complex &other);

	const Complex &operator=(const Complex &other);

	void print(void);

	double getReal() const{return real;}
	double getImaginary() const{return imaginary;}

	bool operator==(const Complex &other)const;
	bool operator!=(const Complex &other)const;
	Complex operator*()const;


};

ostream &operator<<(ostream &out, const Complex &c);
Complex operator+(const Complex &a, const Complex &b);
Complex operator+(const Complex &a, const double &d);
Complex operator+(const double &d, const Complex &a);

#endif /* COMPLEX_H_ */
