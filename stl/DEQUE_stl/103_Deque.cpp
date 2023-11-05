#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(23);
    d.push_back(32);
    d.push_back(21);
    d.push_back(11);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    d.pop_front();    // We are popping up elements from the front of a deque!

    cout<<"After pop :"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

}