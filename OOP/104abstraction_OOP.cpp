/*
ABSTRACTION::

Data abstraction is one of the most essential and important features of object-oriented programming in C++. 
Abstraction means displaying only essential information and hiding the details. Data abstraction refers to 
providing only essential information about the data to the outside world, hiding the background details or 
implementation. 

EXAMPLE::
Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will 
increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the 
accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the 
implementation of the accelerator, brakes, etc in the car
*/
#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void askForPromotion()=0;

};

class Employee: AbstractEmployee { 
    private:
    
    string Company;
    int Age;

    protected:
    string Name;

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
    void askForPromotion(){
        if(Age>30){
            cout<<Name<<" got promoted!"<<endl;
        }
        else{
            cout<<"sorry NO promotion for you!"<<endl;
        }
    }
};

class Developer:public Employee {
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<getName()<<" fixed bug using "<<FavProgrammingLanguage<<endl;
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
class Teacher:Employee{
    public:
    string Subject;
    void prepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    Teacher(string name, string company, int age, string subject)
    :Employee(name, company, age)
    {
        Subject=subject;
    } 
};

        
    

};
int main()
{
    Employee employee1= Employee("Priyanshu", "Google", 19);
    
   
    Employee employee2= Employee("Hancock", "Microsoft", 21);

    Developer d=Developer("Priyanshu", "Google", 25, "C++");
    d.fixBug();
    d.fixBug();
    d.fixBug();
    d.askForPromotion();

    Teacher t=Teacher("Devon", "Code School", 35, "History");
    t.prepareLesson();
    t.askForPromotion();
    
    

    

}