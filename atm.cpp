#include <iostream>
#include <string.h>
#include "CLASS.CPP"
using namespace std;

int main()
{

    int s = 1;
    cout << "*-------------*****WELCOME TO ATM*****-------------*"
         << "\n";
    p1.details();
    do
    {
        cout << "CHOICES" << endl;
        cout << "PRESS-1 FOR DEPOSITE"
             << "\n";
        cout << "PRESS-2 FOR WITHDRAWL"
             << "\n";
        cout << "PRESS-3 FOR NEW-ACCOUNT"
             << "\n";
        cout << "PRESS-4 FOR CHECKBALANCE"
             << "\n";
        cout << "PRESS-5 TO GET YOUR ENTERED DETAILS"
             << "\n";
        cout << "PRESS-6 FOR EXIT"
             << "\n";
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            p1.deposite();

            break;
        case 2:
            p1.withdrawl();

            break;
        case 3:
            p1.newacc();

            break;
        case 4:
            p1.getbalance();

            break;
        case 5:
            p1.showdetails();
            break;
        case 6:
            cout << "THANKYOU FOR BANKING WITH US";

            s = 2;

            break;

        default:
            cout << "ENTER VALID CHOICE";

            break;
        }

    } while (s == 1);

    return 0;
}