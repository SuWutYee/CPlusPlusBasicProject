#include <iostream>
#include <string>
using namespace std;

void Homework_Condition()
{
	string grade = NULL;
	int percentage = 90;

	// If Else
	/*if (percentage > 90)
	{
		grade = "A";
	}
	else if (percentage > 75)
	{
		grade = "B";
	}
	else if(percentage > 65)
	{
		grade = "C";
	}
	else
	{
		grade = "Fail";
	}*/

	// Ternary Operator
	//grade = (percentage > 90) ? "A" : ((percentage > 75) ? "B" : ((percentage > 65) ? "C" : "Fail"));

	// Switch Case
	/*switch (percentage)
	{
	case 90:
		grade = "A";
		break;
	case 75:
		grade = "B";
		break;
	case 65:
		grade = "C";
		break;
	default:
		grade = "Fail";
		break;
	}*/

	cout << "Your Grade is " + grade;
}