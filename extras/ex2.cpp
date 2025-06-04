/********************************************************************
 Write a C++ program using inheritance and friend function concepts:

Define a base class Employee with id and salary as private members and a function 
setEmployeeData().

Define a derived class Manager that adds teamSize as a protected member and a function 
setManagerData().

Create a friend function showEmployeeData() to access private data of Employee.

Use another friend function showManagerDetails() to access both private data from Employee
 and protected data from Manager.
 ************************************************************************/

 #include<iostream>
 #include<string>
using namespace std;
 class Employee{
    private:
    int id,salary;

    public:
    void setEmployeeData(int i,int s)
    {
salary=s;
id=i;
    }

    friend  void showEmployeeData(Employee e);
    friend  void showManagerDetails(class Manager m);
 };

class Manager:public Employee{
    protected:
    int teamSize;

    public:
    void setManagerData(int t){
        teamSize=t;
    }
friend  void showManagerDetails(Manager m);
};


void showEmployeeData(Employee e){
    cout<<"the id is"<<e.id<<"the salary is"<<e.salary<<endl;
}

void showManagerDetails(Manager m){
    cout<<"the id is"<<m.id<<"the salary is"<<m.salary<<"the teamsize is"<<m.teamSize;
}

int main()
{
    Manager m;
    m.setEmployeeData(1,1000);
    m.setManagerData(77);
    showEmployeeData(m);
    showManagerDetails(m);

}