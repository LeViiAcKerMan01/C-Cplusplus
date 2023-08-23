/*
FOUR PILLARS OF OOP ARE AS FOLLOWS:
1- INHERITENCE
2- ENCAPSULATION
3- POLYMORPHISM
4- ABSTRACTION
*/

/*
ENCAPSULATION::
Encapsulation is an Object Oriented Programming concept that binds together the data and functions 
that manipulate the data, and that keeps both safe from outside interference and misuse
*/
#include<iostream>
using namespace std;

class Employee{
    private:
    string Name;
    string Company;
    int Age;

    public:
    void setName(string name){
        Name=name;

}
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;

    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18){
        Age=age;
        }

    }
    int getAge(){
        return Age;
    }

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
    Employee employee1=Employee("Priyanshu", "Google", 19);
    employee1.introduceYourself();
   
   Employee employee2=Employee("Hancock", "Microsoft", 21);
   employee2.introduceYourself();

   employee1.setAge(39);
   cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old!"<<endl;

}
// GETTERS and SETTERS are awesome isn't it!