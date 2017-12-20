#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

/**
* @file complex.h
* @author Rok Kos <kosrok97@gmail.com>
* @brief Class that represent complex number.
*/

class myComplex {
private:
	double real;
	double imaginary;

public:
	// Constructor
	myComplex(double = 0, double = 0);
	// Copy constructor
	myComplex(const myComplex& rhs);
	// Destructor
	~myComplex();
	// Assigment operator
	myComplex& operator=(const myComplex& rhs);
	// plus operator
	myComplex& operator+(myComplex& rhs, myComplex& rhs2);
	
	// Methods
	double getReal() const;
	double getImag() const;
	double abs() const;
};

#endif // COMPLEX_H