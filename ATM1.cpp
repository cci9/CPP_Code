#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>

using namespace std;

class ATM
{
    long int account, mobile_number;
    int pin;
    float balance;
    string name;
public:
    bool valid_true;
    ATM(string cust_name, long int cust_account, int cust_pin, long int cust_mobile_number, float cust_balance)
    {
        account = cust_account;
        pin = cust_pin;
        mobile_number =cust_mobile_number;
        balance = cust_balance;
        name = cust_name;
    }
    bool acc_validcheck(long int en_account, int en_pin)
    {
        if ((account == en_account) & (pin == en_pin))
        {
            system("CLS");
            valid_true = true;
            return valid_true;
        }
        else
        {
            cout<<"Sorry, entered deitails are incorrect"<<endl;
            valid_true = false;
            return valid_true;
        }
    } 
    void checkbalance(){cout<<"Available Balance: "<<balance<<endl;}
    void cash_withdraw(int amount)
    {
        if ((amount <= 0) || (amount > balance)){cout<<"Invalid withdrawl amount OR Insufficient Balance"<<endl;}
        else
        {
            cout<<"Withdraw Susscessful. Please collect your cash"<<endl;
            balance = balance - float(amount);
        }
    }
    void userdetail()
    {
        cout<<"--> Account Number: "<<account<<endl
            <<"--> Name: "<<name<<endl
            <<"--> Registered Mobile number: "<<mobile_number<<endl
            <<"--> Balance: "<<balance<<endl;
    }
    void update_mobile_number(long int old_number, long int new_number)
    {
        if (mobile_number == old_number)
        {
            mobile_number = new_number;
            cout<<"Mobile number update successful"<<endl;
        }
        else{cout<<"Incorrect old mobile number"<<endl;}
    } 
};

int main()
{
    int en_account, en_pin;
    ATM Chetan("Chetan", 123456, 1234, 1111111111, 2000);
    cout<<"***Welcome to Chetan's ATM: All Time Money but never withdrawl***"<<endl<<endl;
    cout<<"Enter your 6 digit Account number: ";
    cin>>en_account;
    cout<<endl;
    cout<<"Enter your 4 digit Account pin: ";
    cin>>en_pin;
    cout<<endl;
    bool validcheck;
    validcheck = Chetan.acc_validcheck(en_account, en_pin);
    if (validcheck)
    {
        do 
        {
            cout<<"***Select below operation***"<<endl<<endl;
            cout<<"1. Check Balance"<<endl
                <<"2. Cash Withdraw"<<endl
                <<"3. Show User Details"<<endl
                <<"4. Update Mobile number"<<endl
                <<"5. Exit"<<endl;
            int operation;
            cin>>operation;
            switch (operation)
            {
                case 1:
                    Chetan.checkbalance();
                    break;
                case 2:
                    cout<<"Enter amount to be withdraw"<<endl;
                    int amount;
                    cin>>amount;
                    Chetan.cash_withdraw(amount);
                    Chetan.checkbalance();
                    break;
                case 3:
                    Chetan.userdetail();
                    break;
                case 4:
                    cout<<"Do you want to udate your curent mobile number"<<endl;
                    char user_input;
                    cout<<"If yes press 'y' or if no press 'n'"<<endl;
                    cin>>user_input;
                    if (user_input == 'y')
                    {
                        double old_number, new_number;
                        cout<<"Enter your old mobile number: ";
                        cin>>old_number;
                        cout<<"Enter your new mobile number: ";
                        cin>>new_number;
                        cout<<endl;
                        Chetan.update_mobile_number(old_number, new_number);
                    }
                    else{cout<<"return to main menu"<<endl;}
                    break;
                case 5:
                    return 0;
            }
            system("PAUSE");
            system("CLS");
        }while(validcheck);
    }
    else{return 0;}
    return 0;
}