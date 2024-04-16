
#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_4.2/ArithmeticProgression.cpp"
#include "../OOP_4.2/GeometricProgression.cpp"
#include "../OOP_4.2/progression.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestArithmeticProgression)
        {
            ArithmeticProgression ap(4, 6);
            Assert::AreEqual(10.0, ap.element_progression(1));
            Assert::AreEqual(16.0, ap.element_progression(2));
            Assert::AreEqual(22.0, ap.element_progression(3));
            Assert::AreEqual(28.0, ap.element_progression(4));
            Assert::AreEqual(34.0, ap.element_progression(5));
        }

 
    };
}
