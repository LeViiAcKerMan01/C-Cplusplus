#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string> s;

    /*
    STACK
    
    First in => last out!
    Last in => First out!*/

    s.push("Priyanshu");
    s.push("Singh");
    s.push("Tadhiyal");

    cout<<"Top element :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element :"<<s.top()<<endl;
    cout<<"Size of stack :"<<s.size()<<endl;
    cout<<"Empty or not :"<<s.empty()<<endl;    // empty() funtion returns a boolean either the given stack is empty or not . If it is empty , it returns 1, else 0

    }