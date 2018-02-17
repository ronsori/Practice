/*
 * Complex.cpp
 *
 *  Created on: Feb 17, 2018
 *      Author: Reza
 */

#include "Complex.h"

ostream &operator<<(ostream &out, const Complex &c){
	out << "(" << c.getReal() << "," << c.getImaginary() << ")";
	return out;
}

Complex operator+(const Complex &a, const Complex &b){
	return Complex(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
}

Complex operator+(const Complex &a, const double &d){
	return Complex(a.getReal() + d, a.getImaginary() );

}

Complex operator+(const double &d, const Complex &a){
	return Complex(a.getReal() + d, a.getImaginary() );
}
Complex::Complex() {
	real =  0;
	imaginary = 0;
}

Complex::Complex(double r, double i): real(r), imaginary(i){

}

Complex::Complex(const Complex &other){
	cout << "Copy" << endl;
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other){
	cout<< "Assignment operator Running" << endl;
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

void Complex::print(void){
    cout << "complex Num:" << real << ":"<< imaginary << endl;
}

bool Complex::operator==(const Complex &other)const{
    return ((real == other.real) && (imaginary == other.imaginary));
}

bool Complex::operator!=(const Complex &other)const{
	return !(*this == other);
}
// Conjugate a complex number
Complex Complex::operator*()const{
	return Complex(real, -imaginary);
}
