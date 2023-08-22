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
    employee1.introduceYourself();
    employee1.introduceYourself();
    employee1.introduceYourself();
    employee1.introduceYourself();


}