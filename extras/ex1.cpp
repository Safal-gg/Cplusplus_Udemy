/******************************************************
wap in c++ that uses both inheritance & friend function

1. define a base class person with name and age as protected members and  a function 
setPersonInfo()

2.define a derived class student with an additional private roll no and a function 
setStudentInfo()

3.use a friend function displayInfo() to access person in protected data

4.use another friend fuction displayStudentInfo() for access data from both person and student.
 
 ******************************************************/



#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    string name;
    int age;

    public:
    void setPersonInfo(string n,int a){
        name=n;
        age=a;

    }

    friend void displayInfo(person p);
};

class student:public person{
      private:
      int roll_number;

      public:
      void setStudentInfo(int r){
        roll_number=r;

      }
      friend void displayStudentInfo(student s);

};

void displayInfo(person p){
     cout<<"name is"<<p.name<<"age is "<<p.age<<endl;
}

void displayStudentInfo(student s){
    cout<<"name is"<<s.name<<"age is "<<s.age<<"roll is "<<s.roll_number<<endl;
}

int main()
{
    
    student s;
    s.setPersonInfo("Safal",18);
    s.setStudentInfo(70);
    displayInfo(s);
    displayStudentInfo(s);

}
