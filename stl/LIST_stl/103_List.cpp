#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l;
    list<int> n(5, 100);   //Initialized a list of 5 elements and assigned a value 100 to each one of them!
    cout<<"Printing n :"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(23);
    l.push_front(12);    

    for(int i:l){
        cout<<i<<" ";

    }cout<<endl;

    l.erase(l.begin());    // erased first element of the list named 'l'

    cout<<"After erase :"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list :"<<l.size()<<endl;
    
}