#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l;
    
    l.push_back(9);
    l.push_back(13);
    l.push_back(32);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    l.erase(l.begin());    //iterators!
    cout<<"After erase :"<<l.size()<<endl;
    for(int i:l){
        cout<<i<<" ";

    }
}