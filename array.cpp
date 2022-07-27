#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {10, 15, 12, 48, 78};
    int i = 4;
    int up = 89;
    do
    {
        marks[i] = marks[i - 1];
        i--;
    } while (i >= 0);
    marks[0] = up;
    i = 0;
    do
    {
        cout << marks[i] << endl;
        i++;
    } while (i < 5);
    cout << endl;
    // array element access using pointers
    int *a = marks;
    i = 0;
    do
    {
        cout << "Array element of index " << i << " by using pointer " << *(a + i) << " and its address is " << (a + i) << endl;
        i++;
    } while (i < 5);
    return 0;
}