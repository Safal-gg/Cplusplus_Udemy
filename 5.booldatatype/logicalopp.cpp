#include<iostream>
using namespace std;

int main()
{
    const int lower{20};
    const int upper{30};

    int num;

    bool within_bounds;
    cout<<boolalpha;
    cout<<"enter the number and the bounds are"<<lower<<"to"<<upper<<":"<<endl;
    cin>>num;


    within_bounds=(num>lower && num<upper);

    cout<<"the number is between"<<lower<<"and"<<upper<<":"<<within_bounds<<endl;

    return 0;

}