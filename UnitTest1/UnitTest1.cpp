#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_2.3/Complex.h"
#include "../LAB_2.3/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestComplex
{
    TEST_CLASS(UnitTestComplex)
    {
    public:
        TEST_METHOD(TestConstructorsAndGetters)
        {
            Complex c(3.0, 4.0);
            Assert::AreEqual(3.0, c.GetX(), 0.0001);
            Assert::AreEqual(4.0, c.GetY(), 0.0001);

            c.SetX(-1.5);
            c.SetY(2.5);
            Assert::AreEqual(-1.5, c.GetX(), 0.0001);
            Assert::AreEqual(2.5, c.GetY(), 0.0001);
        }

        TEST_METHOD(TestAddition)
        {
            Complex a(1.5, 2.5);
            Complex b(2.5, 3.5);
            Complex res = a + b;

            Assert::AreEqual(4.0, res.GetX(), 0.0001);
            Assert::AreEqual(6.0, res.GetY(), 0.0001);
        }

        TEST_METHOD(TestMultiplication)
        {
            // (2 + 3i) * (4 + 1i) = (2*4 - 3*1) + (2*1 + 3*4)i = 5 + 14i
            Complex a(2.0, 3.0);
            Complex b(4.0, 1.0);
            Complex res = a * b;

            Assert::AreEqual(5.0, res.GetX(), 0.0001);
            Assert::AreEqual(14.0, res.GetY(), 0.0001);
        }

        TEST_METHOD(TestEquality)
        {
            Complex a(2.0, -3.0);
            Complex b(2.0, -3.0);
            Complex c(2.0, 3.0);

            Assert::IsTrue(a == b);
            Assert::IsFalse(a == c);
        }

        TEST_METHOD(TestIncrement)
        {
            Complex a(1.0, 2.0);
            ++a;
            Assert::AreEqual(2.0, a.GetX(), 0.0001);
            Assert::AreEqual(2.0, a.GetY(), 0.0001);

            Complex old = a++;
            Assert::AreEqual(2.0, old.GetX(), 0.0001);
            Assert::AreEqual(3.0, a.GetX(), 0.0001);
        }
    };
}