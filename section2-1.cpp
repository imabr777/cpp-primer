/*
 * Section 2.1 Primitive Built-In Types
 */

// Exercise 2.1
// Although the size of each varies depending on hardware, apparently, the C++11 standard guarantees short to be at least 16 bits, an int to be 16 bits, long 32 bits, and long long as 64 bits. 

// An unsigned type dedicates all of the bit space to the value, while a signed type has to have a range of values evenly divided between positive and negative values. 
// This means that an unsigned type can have a greater absolute value than a signed type, but a signed type can have negative values. Ex. unsigned 8 bit can be 0 - 255, signed 8 bit can be -127 - 127.

// A float is guaranteed to have 6 significant digits, a double 10 significant digits. A double is basically a higher precision float.

// Exercise 2.2
// Note: I don't know anything about mortgages or buying a house or the numbers involved

// The mortgage rates I see online typically have 4 significant figures (e.g. 2.103%), so I would use a float for this. We will need to divide the rate by 12 in the calculation,
// but that will still yield 4 significant figures.

// For the principal, I would use an int, because as far as I see, the house values do not have any decimal/cent values attached, and have 6 figures. 
// If houses do actually have decimal values attached, we would need 8 significant figures so I'd use a double.

// For the payment, I would use a double, because typical house payments are in the 6 significant figure range (e.g. 1132.56), but I would like to have some flexibility
// for the some extremely expensive houses, so I would use a double.

// Exercise 2.3
// 32
// Max value of integer on the machine - 31 (because 0 is also an integer) (my result is 4294967264)

// 32
// -32

// 0
// 0

// Exercise 2.4
// #include <iostream>

// int main() 
// {
// 	unsigned u = 10, u2 = 42;
// 	std::cout << u2 - u << std::endl;
// 	std::cout << u - u2 << std::endl;
// 	int i = 10, i2 = 42;
// 	std::cout << i2 - i << std::endl;
// 	std::cout << i - i2 << std::endl;
// 	std::cout << i - u << std::endl;
// 	std::cout << u - i << std::endl;

// 	return 0;
// }

// Exercise 2.5
// (a)   'a' is a character literal
//      L'a' is a wide character (wchar_t) literal
//       "a" is a string literal
//      L"a" is a wide character (wchar_t) literal
// (b)    10 is an integer literal, type int
//       10u is an integer literal, type unsigned int
//       10L is an integer literal, type long
//      10uL is an integer literal, type unsigned long
//       012 is an octal integer for the decimal number 10
//       0xC is a hexidecimal integer, equal to decimal number 12
// (c)  3.14 is a floating point literal, type double
//     3.14f is a floating point literal, type float
//     3.14L is a floating point literal, type long double
// (d)    10 is an integer literal, type int
//       10u is an integer literal, type unsigned int
//       10. is a floating point literal, type double
//     10e-2 is a floating point literal, type double

// Exercise 2.6
// int month = 9, day = 7;
// int month = 09, day = 07;
// The first definition uses normal integers, the second one uses octal integers.
// The second one doesn't compile because 9 is outside the range for base 8 numbers.

// Exercise 2.7
// (a) "Who goes with F\145rgus? \012"
//     This is a string literal, and will display as "Who goes with Fergus?" with an LF (line feed) at the end. I believe it's the same as a newline
// (b) 3.14e1L
//     This is a floating point literal, type long double, and has the value 31.4
// (c) 1024f
//     This is a floating point literal, type double, value 1024.0
// (d) 3.14L
//     This is a floating point literal, type long double, value 3.14

// Exercise 2.8
// #include <iostream>

// int main()
// {
// 	std::cout << "\62\115\12" << std::endl;
// 	std::cout << "\62\11\115\12" << std::endl;
// 	return 0;
// }