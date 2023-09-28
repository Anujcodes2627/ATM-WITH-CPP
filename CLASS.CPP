#include <iostream>
#include <string.h>
using namespace std;
class Atm
{
private:
    int account_number;
    string name;
    int balance = 5000;   //! THIS IS MINIMUM BALANCE 

protected:
    int pass;

public:
    int details()
    {
        cout << "ENTER YOUR NAME"
             << "\n";
        getline(cin, name);
        cout << "ENTER YOUR ACCOUNT NUMBER"
             << "\n";
        cin >> account_number;
        cout << "ENTER YOUR 4 DIGIT PASSWORD"
             << "\n";
        cin >> pass;
    }
    int showdetails()
    {
        cout << "YOU NAME -->" << name << endl;

        cout << "YOUR ACCOUNT NUMBER-->" << account_number
             << "\n";
    }

    int getbalance()
    {
        cout <<"YOUR CURRENT BALANCE IS "<< balance << "\n";
    }
    int newacc()
    {
        int bal;
        cout << "----****WELCOME NEW COUSTOMER****----"
             << "\n";
        cout << "ENTER AMOUNT YOU DEPOSITED IN BANK-->"
             << "\n";
        cin >> bal;
        balance = bal;
    }

    int deposite()
    {
        int amount;

        cout << "WELCOME TO DEPOSITE CENTRE-->"
             << "\n";
        cout << "ENTER YOUR PASSWORD AGAIN-->"
             << "\n";
        int n;
        cin >> n;
        if (n == pass)
        {
            cout << "ENTER AMOUNT YOU WANT TO DEPOSITE-->";
            cin >> amount;
            balance = balance + amount;
            cout << " NOW AVAILABLE BALANCE IS-->" << balance<<endl;
        }
        else
            cout << "WRONG PASSWORD SELECT YOUR CHOICE AGAIN"<<endl;
    }
    int withdrawl()
    {
        int amount;

        cout << "WELCOME TO WITHDRAWL CENTRE-->"
             << "\n";
        cout << "ENTER YOUR PASSWORD AGAIN-->"
             << "\n";
        int n;
        cin >> n;
        if (n == pass)
        {
            cout << "ENTER AMOUNT YOU WANT TO WITHDRAWL-->";
            cin >> amount;
            if (amount > balance)
            {
                cout << "YOUR BALANCE IS NOT SUFFICIENT-->";
            }
            else
            {

                balance = balance - amount;
                cout << "NOW YOUR CURRENT BALANCE IS-->" << balance<<endl;
            }
        }
        else
            cout << "WRONG PASSWORD SELECT YOUR CHOICE AGAIN"<<endl;
    }
} p1;