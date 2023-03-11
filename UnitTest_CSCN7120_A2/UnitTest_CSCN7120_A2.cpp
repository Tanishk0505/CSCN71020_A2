#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int , int*);
extern "C" int setWidth(int, int*);
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

		TEST_METHOD(setLengthInRange)
		{
			int length;
			setLength(57, &length);
			Assert::AreEqual(57,length);
		}

		TEST_METHOD(setLengthOutofRange)
		{
			int length;
			setLength(101, &length);
			Assert::AreEqual(101, length);
		}

		TEST_METHOD(setLengthNegative)
		{
			int length;
			setLength(-57, &length);
			Assert::AreEqual(-57, length);
		}
		TEST_METHOD(setWidthInRange)
		{
			int width;
			setWidth(97, &width);
			Assert::AreEqual(97, width);
		}
		TEST_METHOD(setWidthOutofRange)
		{
			int width;
			setWidth(103, &width);
			Assert::AreEqual(103,width);
		}
		TEST_METHOD(setWidthNegative)
		{
			int width;
			setWidth(-1, &width);
			Assert::AreEqual(-1, width);
		}
	};
}
