#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age for checking" << endl;
    cin >> age;
    cout << "Entered age is " << age << endl;
    // if (age <= 18)
    // {
    //     cout << "You are a kid" << endl;
    // }
    // else if (18 < age && age <= 50)
    // {
    //     cout << "You are a youngster" << endl;
    // }
    // else
    // {
    //     cout << "Your are an old man" << endl;
    // }

    switch (age)
    {
    case 5:
        cout << "Your age is 5" << endl;
        break;
    case 15:
        cout << "Your age is 15" << endl;
        break;
    case 25:
        cout << "Your age is 25" << endl;
        break;
    default:
        cout << "Your age is not in my count" << endl;
        break;
    }
    return 0;
}