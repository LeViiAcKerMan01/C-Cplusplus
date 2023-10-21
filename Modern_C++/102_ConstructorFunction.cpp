#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name=aName;
        major=aMajor;
        gpa=aGpa;
    } 
};
int main()
{
    Student student1("Priyanshu", "Mechanical Engineering", 3.5);
    Student student2("Navneet", "Computer Science and Enginnering", 4.0);
    cout<<student1.major;
    cout<<" ";
    cout<<student2.major;
    cout<<"\n";
    cout<<student1.gpa;
    cout<<" ";
    cout<<student2.gpa;
    return 0;
    }