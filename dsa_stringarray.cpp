#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    cout << arr << endl;
    bool pal = true;
    int i = 0;
    while (i <= n / 2)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            pal = false;
            break;
        }
        i++;
    }
    if (pal)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}