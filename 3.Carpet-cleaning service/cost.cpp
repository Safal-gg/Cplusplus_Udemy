/*********************************************************
 Franks carpet cleaning service
 charges $30 per room 
 sales tax is 6%
 estimates are valid for 30 days

 prompt the user for the number of rooms they would like to clean  
 
 *********************************************************/

 #include<iostream>
 #define price 30
 #define tax_rate 0.06

 using namespace std;

 int main(){
int number_rooms;
float total_estimation,cost,tax;

cout<<"enter number of rooms that you want to clean:";
cin>>number_rooms;
cout<<"============================================"<<endl;
cout<<"number of rooms:"<<number_rooms<<endl;
cout<<"price per room:$"<<price<<endl;

cost=number_rooms * price;
cout<<"cost:$"<<cost<<endl;

tax=number_rooms*price* tax_rate;
cout<<"tax:$"<<tax<<endl;

total_estimation=cost+tax;
cout<<"total estimation:$"<<total_estimation<<endl;

cout<<"this estimation is valid for 30 days"<<endl;

cout<<"============================================"<<endl;
return 0; 
}