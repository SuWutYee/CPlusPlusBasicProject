#include <iostream>
#include <string>
using namespace std;

void SwitchStatement()
{
	string result = "";
	int day = 5;

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
}