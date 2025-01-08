#include <cmath>
#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

class Shop {
  int itemid[100];
  int itemprice[100];
  int counter;

public:
  void setitem();
  void displayitem();
  void initcounter();
};

void Shop::initcounter() { counter = 0; }
void Shop::setitem() {
  cout << "Enter the item id for the item " << counter + 1 << endl;
  cin >> itemid[counter];
  cout << "Enter the item price for the item " << itemid[counter] << endl;
  cin >> itemprice[counter];
  counter++;
}
void Shop::displayitem() {
  for (int i = 0; i < counter; i++) {
    cout << "Price of the item " << itemid[i] << " is " << itemprice[i] << endl;
  }
}
int main() {
  Shop chetankidukan;
  chetankidukan.initcounter();
  chetankidukan.setitem();
  chetankidukan.setitem();
  chetankidukan.setitem();
  chetankidukan.displayitem();
  return 0;
}