#include<iostream>
using namespace std;

int main()
{
    bool equal_result{0}, nonequal_result{0};

    int num1{0},num2{0};
    cout<<boolalpha;
    cout<<"enter two number separated by space:";
    cin>>num1>>num2;

    equal_result=(num1==num2);
    nonequal_result=(num1!=num2);

    cout<<"the result is equal:"<<equal_result<<endl;
    cout<<"the result is not equal:"<<nonequal_result<<endl;

    return 0;
    
}