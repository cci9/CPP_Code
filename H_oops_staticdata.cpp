#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Idcollection {
  int id;
  static int members;

public:
  void setmemberid();
  void getmemberid();
  static void getcount();
};

void Idcollection::setmemberid() {
  cout << "Enter your id" << endl;
  cin >> id;
  members++;
}
void Idcollection::getmemberid() {
  cout << "Your entered ID is " << id << endl;
  cout << "total number of stored id's  are " << members << endl;
}
int Idcollection::members;
void Idcollection::getcount() { cout << "the count is " << members << endl; }
int main() {

  Idcollection chetan, push, chinu;
  chetan.setmemberid();
  chetan.getmemberid();
  Idcollection::getcount();

  push.setmemberid();
  push.getmemberid();
  Idcollection::getcount();

  chinu.setmemberid();
  chinu.getmemberid();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  Idcollection::getcount();
  return 0;
}