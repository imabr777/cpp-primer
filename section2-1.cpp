/*
 * Section 2.1
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