#include<iostream>
using namespace std;

int main()
{
    int age=19;
    double gpa=2.7;
    string name="Mike";

    cout<<"Age:"<<&age<<endl;
    cout<<"Gpa:"<<&gpa<<endl;
    cout<<"Name:"<<&name<<endl;

    return 0;
}
// Pointers point to the memory locations addresses where the data is to be stored!!