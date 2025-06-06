/*********************************************************
 Franks carpet cleaning service
 charges $25 per small room
 charges $35 per large room 
 sales tax is 6%
 estimates are valid for 30 days

 prompt the user for the number of small and large rooms they would like to clean  
 
 *********************************************************/

 #include<iostream>
 using namespace std;

 int main()
{

int number_lrooms,number_srooms;
float total_estimation,cost,tax;

const float tax_rate{0.06};
const double sprice{25};
const double lprice{35};

cout<<"enter number of small rooms that you want to clean:";
cin>>number_srooms;
cout<<"enter number of large rooms that you want to clean:";
cin>>number_lrooms;

cout<<"============================================"<<endl;

cout<<"number of small rooms:"<<number_srooms<<endl;
cout<<"number of large rooms:"<<number_lrooms<<endl;
cout<<"price per small room:$"<<sprice<<endl;
cout<<"price per large room:$"<<lprice<<endl;


cost=(number_srooms * sprice)+(number_lrooms *lprice);
cout<<"cost:$"<<cost<<endl;

tax=cost* tax_rate;
cout<<"tax:$"<<tax<<endl;

total_estimation=cost+tax;
cout<<"total estimation:$"<<total_estimation<<endl;

cout<<"this estimation is valid for 30 days"<<endl;

cout<<"============================================"<<endl;
return 0; 
}