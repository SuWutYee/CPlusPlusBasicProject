#include <iostream>
#include <string>
using namespace std;

void StarProblem()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int a = 1; a <= i; a++)
		{
			cout << "*";
		}
		for (int b = i + 1; b <= 5; b++)
		{
			cout << "#";
		}
		cout << "\n";
	}
}