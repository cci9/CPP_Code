#include <iostream>
using namespace std;

class value
{
    int a, b, c;

public:
    value(int x = 0, int y = 0, int z = 0)
    {
        a = x;
        b = y;
        c = z;
        cout << "The a, b, and c values are " << a << ", " << b << ", and " << c << endl;
    }
};

int main()
{
    value v1;
    value v2(10);
    value v3(10, 20);
    value v4(10, 20, 30);
    return 0;
}