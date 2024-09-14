// C++BasicProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// double value testing

	/*double d1 = 12E6;
	std::cout << "Hello World!\n";
	std::cout << "value is \t" << (uint64_t)d1;*/

	// char value testing

	/*char a = 97, b = 66, c = 67;
	std::cout << a;
	std::cout << b;
	std::cout << c;*/

	// '/' , '%' value testing

	/*int x = 5;
	int a = 3;
	std::cout << x / a;*/
	//std::cout << x % a;

	/*int x = 5;
	x &= 3;
	std::cout << x;*/

	/*int x, y, z;
	x = 5, y = 6, z = 50;
	std::cout << x + y + z;*/

	/*int a = 2;
	int b = 5;
	string result;
	if (a > b)
	{
		std::cout << "True \n";
	}
	else
	{
		std::cout << "False \n";
	}

	result = (a > b) ? "True" : "False";
	cout << result;*/

	string result = "";
	int day = 5;
	/*if (day == 1)
	{
		result = "Monday";
	}
	else if (day == 2)
	{
		result = "Tuesday";
	}
	else if (day == 3)
	{
		result = "Wednesday";
	}*/

	switch (day)
	{
	case 1:
		result = "Monday";
		break;
	case 2:
		result = "Tuesday";
		break;
	default:
		result = "Other";
		break;
	}

	cout << result;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
