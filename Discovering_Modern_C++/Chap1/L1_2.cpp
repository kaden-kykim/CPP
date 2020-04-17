#include <iostream>
#include <string>
#include <complex>

int scope();
int shadow();

int main()
{
	std::cout << "Lesson 1.2 Variables" << std::endl;

	// Variables
	int i1 = 2;
	int i2, i3 = 5;
	float pi = 3.14159;
	double x = -1.5e6;
	double y = -1.5e-6;
	char c1 = 'a', c2 = 35;
	bool cmp = i1 < pi, // true
		 happy = true;

	// [C++11] Type inference
	auto i4 = i3 + 7;

	// Constants
	const int ci1 = 2;
	// const int ci3; // Error
	const float cpi = 3.14159;
	const char cc = 'a';
	const bool ccmp = ci1 < cpi;

	// Literal
	auto literal_int = 2;
	auto literal_unsigned = 2u;
	auto literal_long = 2l;
	auto literal_unsigned_long = 2ul;
	auto literal_double = 2.0;
	auto literal_float = 2.0f;
	auto literal_long_double = 2.0l;

	// Literal: Complex
	std::complex<float> z(1.3, 2.4), z2;
	z2 = 2.0f * z;
	// z2 = 2 * z; // Error
	// z2 = 2.0 * z; // Error

	// Literal: hex, oct, bin
	int o1 = 042;
	// int o2 = 089; // Error
	
	int h1 = 0x42;
	int h2 = 0xfa;

	int b1 = 0b11111010; // [C++14] Equal to int b1 = 250;
	
	// [C++14] Literal: '
	long d = 6'5446'687'616'861'129l;
	unsigned long ulx = 0x139'ae3b'2ab0'94f3;
	int b = 0b101'1001'0011'1010'1101'1010'0001;
	const long double lpi = 3.141'592'653'589'793'238'462l;

	// Literal: String
	char s1[] = "Old C Style";
	std::string s2 = "In C++ better like this";
	std::string s3 = "This is a very long and clumsy text"
					 "that is too long for one line.";

	// [C++11] Not Narrowed - uniform initialization / braced initialization
	long l = { 1234567890123 };
	int narrowed_i1 = 3.14; // Assign with narrowing
	// int i1n = { 3.14 }; // Error
	unsigned u2 = -3; //Assign with narrowing
	// unsigned u2n = { -3 }; // Error
	float f1 = { 3.14 };

	// Local Declare
	scope();

	shadow();
}

int scope()
{
	const double pi = 3.14159265358979323846264338327950288419716939;
	std::cout << "pi is " << pi << ".\n";

	{
		const double blocked_pi = 3.14159265358979323846264338327950288419716939;
	}
	// std::cout << "pi is " << blocked_pi << ".\n"; // Error
}

int shadow()
{
	int a = 5; // a#1 = 5
	{
		a = 3; // a#1 = 3
		int a; // a#2
		a = 8; // a#2 = 8
		{
			a = 7; // a#2 = 7
		}
		std::cout << "a = " << a << std::endl; // a = 7
	}
	a = 11; // a#1 = 11
	std::cout << "a = " << a << std::endl; // a = 11
}
