#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0, currentlength = 0, maxlength = 0, st = 0, maxst = 0;
    while (1)
    {
        if ((arr[i] == ' ') || (arr[i] == '\0'))
        {
            if (currentlength > maxlength)
            {
                maxlength = currentlength;
                maxst = st;
            }
            currentlength = 0;
            st = i + 1;
        }
        else
        {
            currentlength++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlength << endl;
    for (int i = 0; i < maxlength; i++)
    {
        cout << arr[i + maxst];
    }

    return 0;
}