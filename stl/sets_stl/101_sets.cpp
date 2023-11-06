#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(21);
    // Each elements in a set is unique.

    for(auto i:s){
        cout<<i<<" ";

    }cout<<endl;
    // Elements are returned in a sorted order in case of sets.

}