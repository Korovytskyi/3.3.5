#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3E/Triad.h"
#include "../3.3E/Triad.cpp"
#include "../3.3E/Object.h"
#include "../3.3E/Object.cpp"
#include "../3.3E/Date.h"
#include "../3.3E/Date.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a(1, 2, 3);
			Assert::AreEqual(a > 0, true);
		}
	};
}
