#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(32);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"Size:"<<v.size()<<endl;

    cout<<"Element at index 2:"<<v.at(2)<<endl;
    int a=v.at(1);
    int b=v.at(2);
    int product= a*b;
    cout<<"Product of element at index 1 and index 2:"<<product<<endl;

}