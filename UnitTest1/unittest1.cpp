#include "stdafx.h"
#include "CppUnitTest.h"

#include "myComplex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(MyComplexNative)
	{
		TEST_METHOD(TestDeclaration)
		{
			myComplex a(3, 5);
			myComplex b(3, 0);

			Assert::AreEqual(
				// Expected value:  
				3.0,
				// Actual value:  
				a.getReal());
		}

	};
}