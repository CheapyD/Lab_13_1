#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13_1/dod.h"
#include "../Lab_13_1/var.h"
#include "../Lab_13_1/var.cpp"
#include "../Lab_13_1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::n = 4;
			Assert::AreEqual(n, 4);
		}
	};
}
