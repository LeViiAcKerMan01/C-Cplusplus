/*THREE RULES TO CREATE CONSTRUCTOR
1- Constructor donot have a return type.
2- NOTE:: A constuctor has the same name as the class it belongs to, i.e. a constuctor of class Employee will be called Employee only!
3- Constuctor must be public but it can be either of the three i.e. protected, private and public. Its just the requirement at this level of knowledge i am currently having!
*/
#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;

    void introduceYourself(){
        cout<<"Name-"<<Name<<endl;
        cout<<"Company-"<<Company<<endl;
        cout<<"Age-"<<Age<<endl;
    }
    Employee(string name, string company, int age){
        Name=name;
        Company=company;
        Age=age;

    }
};
int main()
{
    Employee employee1("Priyanshu", "Google", 19);
    //employee1.Name="Priyanshu";
    //employee1.Company="Google";
    //employee1.Age=19;

    employee1.introduceYourself();
   
   Employee employee2("Hancock", "Microsoft", 21);
   //employee2.Name="Hancock";
   //employee2.Company="Microsoft";
   //employee2.Age=21;

   employee2.introduceYourself();

}
// Modified same code as in employee class in previous program!