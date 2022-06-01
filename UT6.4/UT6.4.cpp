#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT64
{
	TEST_CLASS(UT64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[3] = {1,2,3};

			Assert::IsTrue(Task(arr, 3));
		}
	};
}