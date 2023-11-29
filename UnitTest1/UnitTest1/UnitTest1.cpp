#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\uksla\source\repos\Project1\Project1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
    TEST_CLASS(calc_Tests)
    {
    public:
        TEST_METHOD(calc_getx5n3_res16)
        {
            int n = 3;
            double x = 5;
            double expected = 16;
            Assert::AreEqual(expected, calc(n, x));

        }
    };
    TEST_CLASS(checkValidPathX_Tests)
    {
    public:
        TEST_METHOD(checkValidPathX_geta5b29_exeptionNotThrown)
        {
            double a = 5;
            double b = 29;
            try
            {
                checkValidPathX(a, b);
                Assert::IsTrue(true);
            }
            catch (...)
            {
                Assert::Fail();
            }
        }
    public:
        TEST_METHOD(checkValidPathX_geta6b3_exeptionThrown)
        {
            double a = 6;
            double b = 3;
            try
            {
                checkValidPathX(a, b);
                Assert::Fail();
            }
            catch (...)
            {
                Assert::IsTrue(true);
            }
        }
    };
    TEST_CLASS(checkValidParams_Tests)
    {
    public:
        TEST_METHOD(checkValidParams_getn4_exeptionNotThrown)
        {
            int n = 6;
            try
            {
                checkValidParams(n);
                Assert::IsTrue(true);
            }
            catch (...)
            {
                Assert::Fail();
            }
        }
    public:
        TEST_METHOD(checkValidParams_getn1_exeptionThrown)
        {
            int n = 2;
            try
            {
                checkValidParams(n);
                Assert::Fail();
            }
            catch (...)
            {
                Assert::IsTrue(true);
            }
        }
    };
    TEST_CLASS(checkValidStep_Tests)
    {
    public:
        TEST_METHOD(checkValidStep_geth6_exeptionNotThrown)
        {
            int h = 6;
            try
            {
                checkValidStep(h);
                Assert::IsTrue(true);
            }
            catch (...)
            {
                Assert::Fail();
            }
        }
    public:
        TEST_METHOD(checkValidStep_getnminus3_exeptionThrown)
        {
            int h = -3;
            try
            {
                checkValidStep(h);
                Assert::Fail();
            }
            catch (...)
            {
                Assert::IsTrue(true);
            }
        }
    };
}
