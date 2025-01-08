#include <cmath>
#include <iostream>
#include <iterator>
#include <string>


using namespace std;

class Base {
  private:
  int privatevariable;
  protected:
  int protectedvariable;

public:
  int a = 20;
  Base() {
    privatevariable = 90;
    protectedvariable = 100;
  }
  friend void friendfunction(Base &obj);
  void data() {
    cout << "Private: " << privatevariable << endl;
    cout << "Protected: " << privatevariable << endl;
  }
};

void friendfunction(Base &obj) {
  cout << "Private: " << obj.privatevariable << endl;
  cout << "Protected: " << obj.privatevariable << endl;
}
int main() {
  Base obj;
  obj.data();
  // cout<<&obj.privatevariable;
  // cout<<&obj.protectedvariable;
  // friendfunction(obj);
//   cout << &obj.privatevariable << endl;
//   cout << sizeof(obj);
  Base *set;
  set = &obj;
  cout << obj.a << "and address is " << &obj.a<<endl;
  cout<<set->a<<"and address is " << &(set->a)<<endl;

  return 0;
}