#include<iostream>
#include<queue>

using namespace std;
int main()
{

    /*PRIORITY_QUEUE -
    
    * A queue whose first element will be always the greatest is called a priority queue.
    * Default priority queue is a max heap and can be converted into min heap.
    * when we fetch some elements from a MAX heap, the element we will be fetching will be maximum.
    * when we fetch some element from a MIN heap, the element we will be fetching will be minimum.
    * A qu*/


    // MAX HEAP
    priority_queue<int> maxi;

    //MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(23);
    maxi.push(32);
    maxi.push(12);

    int n=maxi.size();  //storing size of max heap inside the integer variable n

    //in case of max heap , elements are arranged in an descending order.
    //The first element we will be fetching from a max heap will always be the greatest.
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    // when we fetch some elements from the MAX heap , the element we will be fetching will be maximum.

    
    mini.push(12);
    mini.push(2);
    mini.push(11);
    mini.push(42);
    mini.push(32);

    int m=mini.size();

    //In case of min heap , elements are arranged in a ascending order
    //The first element we will be fetching from a min heap will always be the smallest.
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    //When we fetch some elements from a MIN heap , the element we will be fetching will be minimum.



}
