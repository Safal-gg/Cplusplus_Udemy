// make a program that ask users how many cents they have and give them change


#include<iostream>
using namespace std;

int main()
{
    const int dollar_value{100};
    const int quaters_value{25};
    const int nickels_value{10};
    const int dimes_value{5};
    const int pennies_value{1};

    int cents,dollars,quaters,dimes,nickels,pennies,balance;

    cout<<"How many cents do you have?:";
    cin>>cents;

    dollars=cents/dollar_value;
    balance=cents-(dollars*dollar_value);

    quaters=balance/quaters_value;
    balance -= (quaters*quaters_value);

    dimes=balance/dimes_value;
    balance -= (dimes*dimes_value);

    nickels=balance/nickels_value;
    balance -= (nickels*nickels_value);

    pennies=balance/pennies_value;
    balance -= (pennies*pennies_value);

    cout<<"the gives change are:"<<endl;
    cout<<"dollars:"<<dollars<<endl;
    cout<<"quaters:"<<quaters<<endl;
    cout<<"dimes:"<<dimes<<endl;
    cout<<"nickels:"<<nickels<<endl;
    cout<<"pennies:"<<pennies;



    return 0;

}