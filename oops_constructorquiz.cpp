#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void displaypoint()
    {
        cout << "first point coordinates are (" << a << ", " << b << ")" << endl;
    }
    friend void distance(point, point);
};

void distance(point first, point second)
{
    float val = sqrt(pow(first.a - second.a, 2) + pow(first.b - second.b, 2));
    cout << "Distance between (" << first.a << ", " << first.b << ") and (" << second.a << ", " << second.b << ") is " << val << endl;
}

int main()
{
    point first(1, 1);
    first.displaypoint();
    point second(0, 0);
    second.displaypoint();
    distance(first, second);
    return 0;
}