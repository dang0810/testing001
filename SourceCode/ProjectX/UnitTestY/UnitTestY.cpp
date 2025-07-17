#include <iostream>
#include <string>
#include "pch.h"
#include "CppUnitTest.h"
#include "main_r.h"
#include <climits>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestY
{
	TEST_CLASS(UnitTestY)
	{
	public:
		
		TEST_METHOD(CatLovesFish)
		{
			std::string result = CatReaction("fish");
			Assert::AreEqual(std::string("The cat purrs happily."), result, L"Cats love fish!");
		}
		TEST_METHOD(CatHatesVeg)
		{
			std::string result = CatReaction("broccoli");
			Assert::AreEqual(std::string("The cat looks confused."), result, L"Cats only love fish!");
		}
		TEST_METHOD(CatHatesChoco)
		{
			std::string result = CatReaction("chocolates");
			Assert::AreEqual(std::string("The cat purrs happily.."), result, L"Cats only love fish!");
		}
	};
}
