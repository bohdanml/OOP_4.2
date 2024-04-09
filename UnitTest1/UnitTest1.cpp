#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP_4.2/progression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestArithmeticProgression)
        {
            ArithmeticProgression arith_prog(2, 6);
            Assert::AreEqual(arith_prog.element_progression(0), 2.0);
            Assert::AreEqual(arith_prog.element_progression(1), 8.0);
        }
    };
}