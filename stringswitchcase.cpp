#include <cmath>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;


int main() {
  // string input;
  // int x;
  // cout << "Enter your string: 'test' or 'best'" << endl;
  // cin >> input;
  // cout << "Your entered value is '" << input << "'" << endl;
  // enum inputenum { test, best };
  // if (input == "test") {
  //   x = test;
  // } else if (input == "best") {
  //   x = best;
  // } else {
  //   cout << "You have entered wrong input" << endl;
  //   return 0;
  // }
  // switch (x) {
  // case test:
  //   cout << "Entered is test";
  //   break;
  // case best:
  //   cout << "Entered is best";
  //   break;
  // }

  /*string input with space between words using getline*/
  // string str1;
  // getline(cin, str1);
  // cout<<str1;

  /*String capital chaallenge*/
  string str2 = "afjaflhswfhhkJCHJSGFHVHbcjshfdbhk";
  cout<<str2<<endl;
  for (int i = 0; i < str2.size(); i++)
  {
    if (str2[i] >= 'a' && str2[i] <= 'z'){str2[i]-=32;}
  }
  cout<<str2<<endl;


  return 0;
}