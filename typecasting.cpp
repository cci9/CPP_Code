#include <iostream>

using namespace std;
int main()
{
    float d = 34.5f;
    cout << "the value of d is " << d << " and its size is " << sizeof(34.4) << endl;
    cout << "the value of d is " << d << " and its size is " << sizeof(34.4f) << endl;
    cout << "the value of d is " << d << " and its size is " << sizeof(34.4F) << endl;
    cout << "the value of d is " << d << " and its size is " << sizeof(34.4l) << endl;
    cout << "the value of d is " << d << " and its size is " << sizeof(34.4L) << endl;

    // Reference variables
    int x = 45;
    int &y = x;
    cout << x << endl;
    cout << y << endl;

    // Typecasting
    int f = 20;
    float i = 34.5684;
    cout << "the value of f in int " << f << " and in float " << (float)f << endl;
    cout << "the value of f in int " << f << " and in float " << float(f) << endl;
    cout << "the value of i in int " << i << " and in int " << (int)i << endl;
    cout << "the value of i in int " << i << " and in int " << int(i) << endl;

    int c = int(i);
    cout << c << endl;

    return 0;
}