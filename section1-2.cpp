/*
 * Section 1.2
 */

#include <iostream>

int main() {
	// Exercise 1.3
	std::cout << "Hello, World" << std::endl;

	// Exercise 1.4
	std::cout << "Multiplication calculator" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "You typed in: " << v1 << " and " << v2 << std::endl
	          << "The product is " << v1 * v2 << std::endl;

	// Exercise 1.5: I'm not sure what this exercise is for but okay.
	std::cout << "You typed in: ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << std::endl;
	std::cout << "The product is ";
	std::cout << v1 * v2;
	std::cout << std::endl;
	
	/* Exercise 1.6
	No, this code is not legal because of the semi-colons cutting the code up. 
	Line two is basically left without a left hand operand, and so it's therefore incomplete code.
	To fix this, you either need to add std::cout to each line or remove the semi-colons from all but the last line.
	*/

	return 0;
}