
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3/lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int c;
			int mas[7]{1, 2, 3, 4 , 5, 6, 7};
			c = Print(mas, 7);
			Assert::AreEqual(c, 0);
		}
	};
}