#include <iostream>
#include <string>
using namespace std;

void Homework_Looping()
{
    char Text[] = "Cpp@BuzzL";

    for (int I = 0; Text[I] != 'L'; I++)
    {
        if (!isalpha(Text[I]))
            Text[I] = '*';
        else if (isupper(Text[I]))
            Text[I] = Text[I] + 1;
        else
            Text[I] = Text[I + 1];
    }
    cout << Text;
}