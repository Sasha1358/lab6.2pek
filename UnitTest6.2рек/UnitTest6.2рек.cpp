#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2pek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62рек
{
	TEST_CLASS(UnitTest62рек)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int evenArray[] = { 2, 4, 16, 18, 40 };
			int evenArraySize = 5;
		Assert:(arithmeticmean(evenArray, evenArraySize) == 0.0);

		}
	};
}
