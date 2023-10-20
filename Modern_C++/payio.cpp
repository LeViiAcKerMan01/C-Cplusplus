#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    string first_name;
    string last_name;
    int standard;
    Student(int aAge, string aFirst_name,string aLast_name, int aStandard){
        age=aAge;
        first_name=aFirst_name;
        last_name=aLast_name;
        standard=aStandard;
    }
};
int main()
{

    Student student1(19, "John", "carmack", 10);
    cout<<student1.age;
    cout<<"\n";
    cout<<student1.last_name;
    cout<<",";
    cout<<student1.first_name;
    cout<<"\n";
    cout<<student1.standard;
    cout<<"\n";
    cout<<student1.age<<","<<student1.first_name<<","<<student1.last_name<<","<<student1.standard;
    return 0;
} 