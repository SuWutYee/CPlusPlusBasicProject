#include <iostream>
#include <string>
using namespace std;

void BasicFeature()
{
	// double value testing

	double d1 = 12E6;
	std::cout << "Hello World!\n";
	std::cout << "value is \t" << (uint64_t)d1;

	// char value testing

	char a = 97, b = 66, c = 67;
	std::cout << a;
	std::cout << b;
	std::cout << c;

	// '/' , '%' value testing

	int x = 5;
	int s = 3;
	std::cout << x / s;
	std::cout << x % s;

	int r = 5;
	r &= 3;
	std::cout << r;

	int q, y, z;
	q = 5, y = 6, z = 50;
	std::cout << q + y + z;	
}