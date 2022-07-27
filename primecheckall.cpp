#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool primecheckfun(int a)
{
    bool primecheck = true;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            primecheck = false;
            break;
        }
    }
    return primecheck;
}
int main()
{
    int a, b;
    cout << "Enter the number between a and b inclusive both" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (primecheckfun(i))
        {
            cout << i << "\t";
        }
    }
    return 0;
}