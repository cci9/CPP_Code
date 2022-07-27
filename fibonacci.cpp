#include <iostream>
#include <string>
using namespace std;
void fibenacci(int a)
{
    int x = 0;
    int y = 1;
    int next;
    for (int i = 1; i <= a; i++)
    {
        cout << x << "\t";
        next = x + y;
        x = y;
        y = next;
    }
}

int main()
{
    int n;
    cout << "Enter a number for fibenacci series:" << endl;
    cin >> n;
    fibenacci(n);
    return 0;
}