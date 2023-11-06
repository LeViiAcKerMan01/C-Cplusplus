#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<string> q;
    q.push("Priyanshu");
    q.push("Singh");
    q.push("Tadhiyal");

    cout<<"Size before pop :"<<q.size()<<endl;
    cout<<"First element before pop :"<<q.front()<<endl;    //First in => first out in case of queues!

    q.pop();    // poped one element
    
    cout<<"First element after pop :"<<q.front()<<endl;
    cout<<"Size after pop :"<<q.size()<<endl;
    

    }