#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;
    public:
    void initcounter(){counter = 0;}
    void setdetail();
    void getdetail();


};
void shop::setdetail()
{
    cout<<"Enter item id for the item "<<counter + 1 <<endl;
    cin>>itemid[counter];
    cout<<"Enter item price for the item "<<counter + 1 <<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::getdetail()
{
    for(int i = 0; i<counter;i++)
    {
        cout<<"Item ID is "<<itemid[i]<<" and price is "<<itemprice[i]<<endl;
    }
}


int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setdetail();
    dukaan.setdetail();
    dukaan.setdetail();
    dukaan.getdetail();
    return 0;
}