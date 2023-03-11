#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCSCN7120A2
{
	TEST_CLASS(UnitTestCSCN7120A2)
	{
	public:
		
		TEST_METHOD(TestgetPerimeter)
		{
			int length = 12;
			int width = 8;
			int TestResult;
			int ExpectedResult = 40;
			TestResult = getPerimeter(&length,&width);
			Assert::AreEqual(ExpectedResult, TestResult);
		}

		TEST_METHOD(TestgetArea)
		{
			int length = 12;
			int width = 8;
			int TestResult;
			int ExpectedResult = 96;
			TestResult = getArea(&length, &width);
			Assert::AreEqual(ExpectedResult, TestResult);
		}
	
	};
}
