#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<int> q;
    int i;
    q.push(21);
    q.push(23);
    q.push(43);
    q.push(34);
    cout<<"Size before pop :"<<q.size()<<endl;
    cout<<"First elements before pop :"<<endl;
    for(int i=0; i<4; i++){
        cout<<q.front()<<" ";

    }cout<<endl;
    cout<<"Last element before pop :"<<q.back()<<endl;

    
    cout<<"First element after pop :"<<endl;
    q.pop();
    
    for(int i=0; i<4; i++){
        cout<<q.front()<<" ";
        
    }cout<<endl;
    cout<<"Last element after pop :"<<q.back()<<endl;

    
    cout<<"Size after pop :"<<q.size()<<endl;
    

}
/* QUEUES - 
In a queue the element which is entered first will be the first to be poped out. 
Hence last element of the queue remains same as we can see through the output of this code.
*/
