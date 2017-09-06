	  
#include "stdafx.h"
#include "myComplex.cpp"

BOOST_AUTO_TEST_CASE(MyComplexAddTests)  
{
	myComplex a(3, 5);
	myComplex b(3, 0);

	BOOST_CHECK(a.getReal() == 3);

	BOOST_CHECK(a.getImag() == 5);

	BOOST_CHECK((a.getReal()+b.getReal()) == 6);

}

BOOST_AUTO_TEST_CASE(MyComplexValAbsTests)
{

	myComplex classictest(2, 2);
	myComplex pureReal(3, 0);
	myComplex pureImg(0, 4);
	myComplex nullVal(0, 0);

	BOOST_CHECK(classictest.abs() == sqrt(8));

	BOOST_CHECK(pureReal.abs() == 3);

	BOOST_CHECK(pureImg.abs() == 4);

	BOOST_CHECK(nullVal.abs() == 0);

	BOOST_CHECK(nullVal.abs() == sqrt(0));
}