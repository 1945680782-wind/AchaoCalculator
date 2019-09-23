
#include "stdafx.h"
#include "CppUnitTest.h"
#include <assert.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
double run1(char c, double d1, double d2)//计算四则运算
{
	switch (c)
	{
	case '+':
		return d1 + d2;
		break;
	case '-':
		return d1 - d2;
		break;
	case'*':
		return d1 * d2;
		break;
	case '/':
		return d1 / d2;
		break;
	default:
		return 0.0;
		break;
	}
}
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			double i = run1('+', 2, 3);
			assert(i,5);
		}
	};
}