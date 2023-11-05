#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"Front:"<<v.front()<<endl;
    cout<<"Back:"<<v.back()<<endl;

    cout<<"Capacity :"<<v.capacity()<<endl;
    
}