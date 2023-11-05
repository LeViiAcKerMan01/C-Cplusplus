#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l;
    l.push_back(12);
    l.push_front(23);
    l.push_back(11);
    l.push_back(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

}