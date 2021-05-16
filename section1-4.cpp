/* 
 * Section 1.4
 */

#include <iostream>

int main()
{
	// Exercise 1.9
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is "
	          << sum << std::endl;

	// Exercise 1.10
	int i = 10;
	while (i >= 0) {
		std::cout << i << std::endl;
		i--;
	}
	std::cout << "Boom";

	// Exercise 1.11
	// assumes the first int is smaller, if not then nothing is printed
	int a = 0, b = 0;
	std::cin >> a >> b;
	while (a <= b) {
		std::cout << a << std::endl;
		a++;
	}

	/* Exercise 1.12: What does the following for loop do? What is the final value of sum?
	 *
	 * int sum = 0;
	 * for (int i = -100; i <= 100; ++i)
	 * 	sum += i;
	 *
	 * The loop adds every number between -100 and 100, the sum is 0
	 */

	// Exercise 1.13
	sum = 0;
	for (int j = 50; j <= 100; j++) {
		sum += j;
	}
	std::cout << sum << std::endl;

	for (int k = 10; k >= 0; k--) {
		std::cout << k << std::endl;
	}

	// Exercise 1.14
	// The for loops seem more concise and easy to understand. All of the conditions of the loop are on one line
	// While loops seem more flexible

	// Exercise 1.15 Make common errors
	// This one should be a syntax error
	// std::cout << 'This won't work':
	// This one should be a type error
	// int words = "Hello"
	// This one should be a declaration error (since the var words was not declared first)
	// words = "Hello"

	// Exercise 1.16
	sum = 0, val = 0;
	while (std::cin >> val) {
		sum += val;
	}
	std::cout << "Sum is: " << sum << std::endl;

	// Exercise 1.17
	// It just counts all of them.
	// When there are no duplicated values, it counts all of them once, but sometimes displays the message twice

	// Exercise 1.18
	// Did it

	// Exercise 1.19
	int a = 0, b = 0;
	std::cin >> a >> b;
	if (a <= b) {
		while (a <= b) {
			std::cout << a << std::endl;
			a++;
		}
	} else {
		while (b <= a) {
			std::cout << b << std::endl;
			b++;
		}
	}

	return 0;
}