#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool pythagorus(int x, int y, int z)
{
    int a = max(max(x, y), z);
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int p, q, r;
    cout << "Enter the number to check if they are pythagorus triplets\n";
    cin >> p >> q >> r;
    if (pythagorus(p, q, r))
    {
        cout << "Given numbers are pythagorus triplet\n";
    }
    else
    {
        cout << "Given numbers are not pythagorus triplet\n";
    }
    return 0;
}