#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(12);
    d.push_back(11);
    d.push_front(32);

    cout<<"Print First Index Element :"<<d.at(1)<<endl;

   

    cout<<"Element before erase :"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
   

    cout<<"Front :"<<d.front()<<endl;
    cout<<"Back :"<<d.back()<<endl;

    

    cout<<"Empty or not :"<<d.empty()<<endl;
    
    cout<<"Before Erase :"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase :"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<endl;
    }

}