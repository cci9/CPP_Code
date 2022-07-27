#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // getline(cin, s);
    // cout << s << endl;

    string s1 = "chetanchaudhari";
    cout << s1 << endl;
    string s2(5, 't');
    cout << s2 << endl;
    // s1.append(s2);

    // string s3;

    /*
    s3 = s1 + s2;
    s3.clear();
    cout << s3 << endl;
    */

    /*
    bool check = s1.compare(s2);
    cout << check << endl;
    if (!s1.compare(s2))
        cout << "strings are same" << endl;
    else
        cout << "strings are different" << endl;
    */

    /*
    s1.clear();
    bool empty = s1.empty();
    cout << empty;
    */

    /*
    s1.erase(0, 3); // idex and length: from 0 index to next three
    cout << s1;
    */

    // cout << s1.find("ch");//output will be from which index the substring is available

    /*
    s1.insert(0, "genius");
    cout << s1 << endl;
    */

    // cout << s1.length() << " or " << s1.size() << endl;

    // cout << s1.substr(0, 5) << endl;

    /*
    string snum = "750";
    int num = stoi(snum) + 10;
    cout << num << endl;
    */

    /*
     int num = 120;
     string numstring = to_string(num);
     numstring.append("test");
     cout << numstring << endl;
    */

    string sortstring = "xgshdgtnshnvnajkkana";
    sort(sortstring.begin(), sortstring.end());
    cout << sortstring << endl;

    return 0;
}