#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(23);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(32);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(40);
    cout<<"Capacity :"<<v.capacity()<<endl;

    cout<<"Size :"<<v.size()<<endl;
    cout<<"Front :"<<v.front()<<endl;
    cout<<"Back :"<<v.back()<<endl;

    cout<<"before pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;\

    v.pop_back();

    cout<<"After pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    

    cout<<"Before clear size :"<<v.size()<<endl;

    v.clear();
    
    cout<<"After clear size :"<<v.size()<<endl;
    


}