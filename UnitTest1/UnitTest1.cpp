#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix.h"
#include "../Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rows = 1, cols = 1;
			Matrix s;
			bool h = s.Init(rows, cols);
			Assert::AreEqual(h, true);
		}
	};
}
