#include <iostream>
#include <string>
using namespace std;

void IfElseCondition()
{
	int a = 2;
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
	cout << result;
}