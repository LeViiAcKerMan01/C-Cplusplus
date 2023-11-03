#include<iostream>
#include<array>

using namespace std;
int main(){
    array<int,4> a={22,54,34,65};
    int size=a.size();
    for (int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }cout<<endl;                                              //newline
    cout<<"Element at 2nd index element:"<<a.at(2)<<endl;     //at(i) returns the element in that array at the index provided!
    cout<<"Empty or not:"<<a.empty()<<endl;                   // empty() returns a boolean as to weather the array is empty or not!
}