#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(23);
    d.push_back(34);
    d.push_back(21);
    d.push_back(17);

    for(int i:d){
        cout<<i<<" ";

    }cout<<endl;

    cout<<"After pop back :"<<endl;
    d.pop_back();
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

}