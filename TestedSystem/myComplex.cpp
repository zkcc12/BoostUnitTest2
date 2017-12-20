#include "myComplex.h"

myComplex::myComplex(double _real, double _imaginary) {
	this->real = _real;
	this->imaginary = _imaginary;
}

myComplex::myComplex(const myComplex& rhs) {
	this->real = rhs.real;
	this->imaginary = rhs.imaginary;
}

myComplex::~myComplex() {

}

myComplex& myComplex::operator=(const myComplex& rhs) {
	this->real = rhs.real;
	this->imaginary = rhs.imaginary;

	return *this;
}

myComplex& myComplex::operator+(myComplex& rhs) {
	this->real += rhs.real;
	this->imaginary += rhs.imaginary ;

	return *this;
}


double myComplex::getReal() const {
	return this->real;
}

double myComplex::getImag() const {
	return this->imaginary;
}

double myComplex::abs() const {
	return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

