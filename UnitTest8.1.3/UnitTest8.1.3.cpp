#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string c;
			std::string str = "asdasabc";
			c = change(str);
			Assert::AreEqual(str[1], '**');
		}
	};
}
