#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My621test
{
	TEST_CLASS(My621test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 11;
			Assert::AreEqual(a, 11);
		}
	};
}
