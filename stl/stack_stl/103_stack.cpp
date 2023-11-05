#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string> s;

    s.push("Priyanshu");
    s.push("ka");
    s.push("Badla");

    cout<<"Top element :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element :"<<s.top()<<endl;
    s.pop();
    cout<<"Empty or not :"<<s.empty()<<endl;    // its empty now as all elements are popped out hence returns 1!
    cout<<"size :"<<s.size()<<endl;             // size of the sack mow becomes 0 as all elements have been popped out!
    
    }