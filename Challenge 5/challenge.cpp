#include<iostream>
#include<vector>
using namespace std;

int main(){
    char choice;
    int i;
    vector <int> list {0,1,2,3};

    cout<<"P - print numbers"<<endl;
    cout<<"A - add numbers"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit"<<endl;

    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 'P':
        case 'p':{
        for(int vectors: list){
            cout<<vectors<<endl;
        }
        break;}
        
        case 'A':
        case 'a':{
        int add_number;
        cout<<"what number do you want to add?";
        cin>>add_number;
        list.push_back(add_number);
        for(int vectors: list){
            cout<<vectors<<endl;
        }
        break;}


        case 'M':
        case 'm':{
        int mean_number{0};
        int sum=0;
        for(i=0;i<list.size();i++){
        sum=sum+list.at(i);
        }
        mean_number=sum/list.size();
        cout<<"the mean of the list  is:"<<mean_number<<endl;
        break;}

        case 'S':
        case 's':{
        int smallest_number=list.at(0);
        
        for(i=0;i<list.size();i++){
        if(smallest_number>list.at(i)){

            smallest_number=list.at(i);
        
        }}
        cout<<"the smallest element is:"<<smallest_number<<endl;
        break;}

        case 'L':
        case 'l':{
        int largest_number=list.at(0);
        
        for(i=0;i<list.size();i++){
        if(largest_number<list.at(i)){

            largest_number=list.at(i);
        
        }}
        cout<<"the largest element is:"<<largest_number<<endl;
        break;}


        case 'Q':
        case 'q':{
        cout<<"Goodbye"<<endl;
        break;}

        default:
        cout<<"Invalid input"<<endl;
        }
    

    return 0;
}