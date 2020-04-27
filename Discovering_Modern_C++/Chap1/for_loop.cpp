#include <iostream>

int main()
{
	// [C++11] Range-Based for-Loop
	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
	for (int i : primes)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}
