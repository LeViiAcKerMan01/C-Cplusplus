#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(21);
    d.push_front(43);

    cout<<"Print First Index Element :"<<endl;
    cout<<d.at(1)<<endl;

    
}