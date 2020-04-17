#include <iostream>
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

	// Type inference
	auto i4 = i3 + 7;
}
