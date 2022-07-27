#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Executed 2 argument function\n";
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Executed 3 argument function\n";
    return a + b + c;
}
int main()
{
    cout << "the sm of 3 and 6 is " << sum(3, 6) << endl;
    cout << "the sm of 3, 6, and 7 is " << sum(3, 6, 7) << endl;
    return 0;
}