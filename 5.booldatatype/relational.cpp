#include<iostream>
using namespace std;

int main()
{
int num1,num2;
cout<<"enter two numbers:";
cin>>num1>>num2;

cout<<boolalpha;

cout<<num1<<"="<<num2<<" "<<(num1==num2)<<endl;
cout<<num1<<">"<<num2<<" "<<(num1>num2)<<endl;
cout<<num1<<"<"<<num2<<" "<<(num1<num2)<<endl;
cout<<num1<<">="<<num2<<" "<<(num1>=num2)<<endl;
cout<<num1<<"<="<<num2<<" "<<(num1<=num2)<<endl;

return 0;
}