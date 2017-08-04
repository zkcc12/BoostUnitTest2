      
#include "stdafx.h"
#include "myComplex.cpp"

using namespace std;

#define BOOST_TEST_MODULE Boost.Test myComplex tests;

myComplex a(3, 5);
myComplex b(3, 0);

BOOST_AUTO_TEST_CASE( BoostUnitTest )  
{
    myComplex a(3, 5);
    myComplex b(3, 0);

    BOOST_CHECK(a.getReal() == 3);
    cout << "a.real = 3 ok" << endl;


    BOOST_CHECK(a.getImag() == 5);
    cout << "a.img = 5 ok" << endl;


    BOOST_CHECK((a.getReal()+b.getReal()) == 6);
    cout << "real(a)+real(b) = 6 ok" << endl;

}

