
#include <iostream>
using namespace std;
void showMenu()
{
    cout<<"************menu************"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
}

int main()
{
    int option;
    double balance=500;
    do
    {
        showMenu();
        cout<<"option:";
        cin>>option;
        system("cls");
        switch(option)
        {
        case 1:
            cout<<"balance is:"<<balance<<"$"<<endl;
            break;
        case 2:
            cout<<"Deposit Amount:"<<endl;
            double Depositamount;
            cin>>Depositamount;
            balance+=Depositamount;
            break;
        case 3:
            cout<<"Withdraw Amount:"<<endl;
            double Withdrawamount;
            cin>>Withdrawamount;
            if(Withdrawamount<=balance)
                balance-=Withdrawamount;
            else
                cout<<"not enough money"<<endl;
            break;



        }
    }
    while(option!=4);


    return 0;
}
