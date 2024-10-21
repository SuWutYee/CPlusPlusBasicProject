#include "MainHeader.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	//	Fruit mango;
	//	mango.name = "mango";
	//	mango.color = "yellow";
	//	mango.price = 100.05;
	//	cout << "Name: " << mango.name << " Color: " << mango.color << " Price: " << mango.price;
	//
	//	cout << "\n";
	//
	//	Fruit apple;
	//	apple.name = "apple";
	//	apple.color = "red";
	//	apple.price = 200.05;
	//	cout << "Name: " << apple.name << " Color: " << apple.color << " Price: " << apple.price;

	/*char one[] = "one";
	char two[] = "two";

	cout << strcmp(one, two) << "\n";

	if (one == two) {
		cout << "Equal";
	}

	if (strcmp(one, two) == 0) {
		cout << "Equal";
	}
	else
	{
		cout << "NotEqual";
	}*/

	//string cars[6] = { "Car1","Car2","Car3","Car4","Car5","Car6" };
	///*cars[0] = "Car5";
	//cout << cars[0];*/

	//cout << cars->length();
	/*string cars[6] = { "Volvo", "BMW", "Ford", "Mazda" , "Volvo1" , "BMW1" };
	for (int i = 0; i < cars->length() + 1; i++)
	{
		cout << cars[i] << "\n";
	}*/


	/*int myNumbers[5] = { 10, 20, 30, 40, 50 };
	int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
	cout << getArrayLength;*/

	/*string letters[2][4] = {
	{ "A", "B", "C", "D" },
	{ "E", "F", "G", "H" }
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters[i][j] << " ";
		}
		cout << "\n";
	}*/

	enum Level {
		LOW,
		MEDIUM,
		HIGH
	};

	return 0;
}
