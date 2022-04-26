#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab(1.5)/Triad.cpp"
#include "C:\Users\Maria\source\repos\Lab(1.5)\Lab(1.5)\Date.h"
#include "C:\Users\Maria\source\repos\Lab(1.5)\Lab(1.5)\Date.cpp"
#include "C:\Users\Maria\source\repos\Lab(1.5)\Lab(1.5)\Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1;
			t1.Init(8, 1, 3);
			int test = t1.check();
			Assert::AreEqual(1, test);

		}
	};
}
