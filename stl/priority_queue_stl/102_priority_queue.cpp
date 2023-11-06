#include<iostream>
#include<queue>

using namespace std;
int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int , vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(11);
    maxi.push(32);
    maxi.push(14);
    maxi.push(21);
    cout<<"Size :"<<maxi.size()<<endl;

    int n=maxi.size();

    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(22);
    mini.push(12);
    mini.push(2);
    mini.push(23);
    mini.push(42);

    int m=mini.size();
    
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    

    cout<<"Khaali h kya bhai :"<<mini.empty()<<endl; 
    cout<<"khali h kya bhai :"<<maxi.empty()<<endl;
    // As all elements have been popped out of the queue , thus empty() returns 1 as the boolean for true.


}