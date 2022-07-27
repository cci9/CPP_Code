#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 5;
    for (int i = 0; i < a; i++)
    {
        if ((i == 0) || (i == a - 1))
        {
            cout << "* * * * *" << endl;
        }
        else
        {
            cout << "*       *" << endl;
        }
    }
    return 0;
}