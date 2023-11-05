#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(11);
    d.push_back(21);   // push_back(i) function to input the elements!
    d.push_back(32);
    d.push_back(2);

    for(int i:d){
        cout<<i<<" ";

    }cout<<endl;
}

// In a DEQUE , elements are not in a SORTED manner!