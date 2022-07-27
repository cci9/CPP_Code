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
    int a;
    cout << "Enter a number to chck if prime or not" << endl;
    cin >> a;
    if (primecheckfun(a))
    {
        cout << "Given number is prime" << endl;
    }
    else
    {
        cout << "Given number is not prime" << endl;
    }
}