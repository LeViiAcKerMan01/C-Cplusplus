#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};
    array<int,4> a={22,33,44,55};
    int size=a.size();

    cout<<"First element:"<<a.front()<<endl;
    cout<<"Last element:"<<a.back()<<endl;
    
    

}