#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3C/Lab3.3C/Vector3D.h"
#include "../Lab3.3C/Lab3.3C/Vector3D.cpp"
#include "../Lab3.3C/Lab3.3C/Object.h"
#include "../Lab3.3C/Lab3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D A(1, 2, 3), B(4, 5, 6);
			//A * B	
			Assert::AreEqual(A * B, 32.);
		}
	};
}
