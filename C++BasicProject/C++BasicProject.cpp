#include "MainHeader.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	if (++x == 5)
	{
		cout << x;
		cout << "Five";
	}
	else if (x == 6)
	{
		cout << x;
		cout << "Six";
	}
	return 0;
}
