/********************************************************************

Create a C++ program using inheritance and friend functions:

Define a base class Animal with protected members species and lifespan, and a function 
setAnimalData().

Derive a class Dog with an additional private member breed and a function setDogData().

Use a friend function displayAnimal() to access data from Animal.

Use a friend function displayDogDetails() to access data from both Animal and Dog.
 ************************************************************************/

  #include<iostream>
 #include<string>
using namespace std;

class Animal{
protected:
string species;
int lifespan;

public:
void setAnimalData(string s,int l)
{
    species=s;
    lifespan=l;
}

friend void displayAnimal(Animal a);
};

class Dog:public Animal{
private:
string breed;


public:
void setDogData(string b)
{
    breed=b;
}

friend void DogDetails(Dog d);
};

void displayAnimal(Animal a){
    cout<<"species is"<<a.species<<"lifespan is "<<a.lifespan<<endl;
}
void DogDetails(Dog d){
    cout<<"species is"<<d.species<<"lifespan is "<<d.lifespan<<"breed is"<<d.breed<<endl;
}

int main()
{
    Dog d;
    d.setAnimalData("mammals",15);
    d.setDogData("husky");

    displayAnimal(d);
    DogDetails(d);
}