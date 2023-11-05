#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(23);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(21);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(34);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Capacity :"<<v.capacity()<<endl;

    cout<<"Before pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity :"<<v.capacity()<<endl;
    


}