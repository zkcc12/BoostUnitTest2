	  
#include "stdafx.h"
#include "myComplex.cpp"

myComplex a(2, 2);
myComplex b(3, 0);
myComplex c(0, 4);
myComplex nullval(0, 0);

BOOST_AUTO_TEST_CASE( BoostUnitTest )  
{
	BOOST_CHECK(a.abs() == sqrt(8));

	BOOST_CHECK(b.abs() == 3);

	BOOST_CHECK(c.abs() == 4);

	BOOST_CHECK(nullval.abs() == 0);

	BOOST_CHECK(nullval.abs() == sqrt(0));
}

