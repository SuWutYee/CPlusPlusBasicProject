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

	//string cars[6] = { "Car1","Car2","Car3","Car4","Car5","Car6" };
	///*cars[0] = "Car5";
	//cout << cars[0];*/

	//cout << cars->length();
	string cars[6] = { "Volvo", "BMW", "Ford", "Mazda" , "Volvo1" , "BMW1" };
	for (int i = 0; i < cars->length() + 1; i++)
	{
		cout << cars[i] << "\n";
	}
	return 0;
}
