#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter number till all narcissistic numbers are need to find\n";
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int narci = 0;
        int idum = i;
        while (i > 0)
        {
            narci += pow((i % 10), 3);
            i /= 10;
        }
        if (narci == idum)
        {
            cout << idum << "\t";
        }
    }
    return 0;
}