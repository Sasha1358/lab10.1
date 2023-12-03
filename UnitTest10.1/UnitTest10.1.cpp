#include "pch.h"
#include "CppUnitTest.h"
#include "../lab10.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(ProcessTXT1(""), 0);
		}
	};
}
