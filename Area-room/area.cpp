// WAP to calculate area of a room by asking user length and width of the room in square feet.

#include<iostream>
using namespace std;

int main(){
int length,width;

cout<<"enter length and breadth of the room in square feet:";
cin>>length>>width;

int area;

area=length*width;
cout<<"the area of the room is :"<<area<<"sqr.ft"<<endl;

return 0;
}