      
#include "stdafx.h"
#include "myComplex.cpp"

#define BOOST_TEST_MODULE Boost.Test myComplex tests;

myComplex a(3, 5);
myComplex b(3, 0);

BOOST_AUTO_TEST_CASE( MyComplexBoost )  
{
    myComplex a(3, 5);
    myComplex b(3, 0);

    BOOST_CHECK(a.getReal() == 3);

    BOOST_CHECK(a.getImag() == 5);

    BOOST_CHECK((a.getReal()+b.getReal()) == 6);

}

