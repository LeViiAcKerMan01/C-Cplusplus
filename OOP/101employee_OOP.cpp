#include<iostream>
using namespace std;
// NOTE- by default everyting in your class is going to be private . So you need to make it all public to access these attributes!
/*There are three access modifiers :
-public
-private
-protected
*/
class Employee {
    public :
    string Name;
    string Company;
    int Age;
// function to introduce yourself , so that you don't have to write that peace of code again and again!
    void introduceYourself(){
        cout<<Name<<endl;
        cout<<Company<<endl;
        cout<<Age<<endl;
    }

};

int main()
{
    Employee employee1;
    employee1.Name="Priyanshu";
    employee1.Company="Google";
    employee1.Age=19;

    employee1.introduceYourself();
   
   Employee employee2;
   employee2.Name="Hancock";
   employee2.Company="Microsoft";
   employee2.Age=19;

   employee2.introduceYourself();

   


}