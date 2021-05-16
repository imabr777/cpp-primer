/*
 * Section 1.5
 */

#include <iostream>
#include "Sales_item.h"

int main() {
	// // Exercise 1.20
	// Sales_item book;
	// while(std::cin >> book) {
	// 	std::cout << book << std::endl;
	// }

	// // Exercise 1.21
	// Sales_item item1, item2;
	// std::cin >> item1 >> item2;
	// std::cout << item1 + item2 << std::endl;

	// // Exercise 1.22
	// Sales_item track, add;
	// while(std::cin >> add) {
	// 	track += add;
	// }
	// std::cout << track << std::endl;
	

	// Exercise 1.23
	Sales_item total, trans;
	std::cin >> total;
	while(std::cin >> trans) {
		if (total.isbn() == trans.isbn()) {
			total += trans;
		} else {
			std::cout << total << std::endl;
			total = trans;
		}
	}
	std::cout << total << std::endl;

	return 0;
}