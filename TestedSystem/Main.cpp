#include <iostream>

#include "myComplex.h"

int main() {
	myComplex a(3, 5);
	myComplex b(3, 0);
	myComplex c(a);

	std::cout << a.getReal() << " " << a.getImag() << " " << a.abs() << std::endl;
	std::cout << b.getReal() << " " << b.getImag() << " " << b.abs() << std::endl;
	std::cout << c.getReal() << " " << c.getImag() << " " << c.abs() << std::endl;

	system("pause");

	return 0;
}