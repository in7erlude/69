#include "pch.h"
#include "CppUnitTest.h"
#include "../Labaa5.1/Labaa5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l  = h(1, 1);
			Assert::AreEqual(l, 0.5);
		}
	};
}
