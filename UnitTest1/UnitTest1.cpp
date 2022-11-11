#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06,3Iter/Lab_06,3Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int p[] = { -3, 6, -8, 21, -9 };
			int S = Count(p, 5, 0, 0);

			Assert::AreEqual(S, 3);

		}
	};
}
