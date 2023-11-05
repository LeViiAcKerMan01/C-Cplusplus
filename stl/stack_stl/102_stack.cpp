#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("Priyanshu");
    s.push("Singh");
    s.push("Tadhiyal");

    cout<<"Top element :"<<s.top()<<endl;
    
    s.pop();

    cout<<"Top element :"<<s.top()<<endl;

    cout<<"Empty or not :"<<s.empty()<<endl;
    cout<<"Size of stack :"<<s.size()<<endl;
}