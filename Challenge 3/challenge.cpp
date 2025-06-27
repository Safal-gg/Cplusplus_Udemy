#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vector_1;
    vector <int> vector_2;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout<<"the first element of the first vector is:"<<vector_1.at(0)<<endl;
    cout<<"the second element of the first vector is:"<<vector_1.at(1)<<endl;
    cout<<"the size of the first vector is:"<<vector_1.size()<<endl;

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout<<"the first element of the second vector is:"<<vector_2.at(0)<<endl;
    cout<<"the second element of the second vector is:"<<vector_2.at(1)<<endl;
    cout<<"the size of the second vector is:"<<vector_2.size()<<endl;

    vector <vector <int>> vector_2d;
    
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout<<"the elements in 2d vector are:"<<vector_2d.at(0).at(0)<<vector_2d.at(0).at(1)<<vector_2d.at(1).at(0)<<vector_2d.at(1).at(1)<<endl;

    vector_1.at(0)=1000;
     cout<<"the elements in 2d vector are:"<<vector_2d.at(0).at(0)<<vector_2d.at(0).at(1)<<vector_2d.at(1).at(0)<<vector_2d.at(1).at(1)<<endl;
    cout<<"the first element of the first vector is:"<<vector_1.at(0)<<endl;

}

