// Program-1
/*#include<iostream>
using namespace std;

void sayHi(){
    cout<<"Hello user";

}

int main()
{
    sayHi();
    return 0;

}*/

/*
#include<iostream>
using namespace std;

void sayHi(string name){
    cout<<"Hello "<<name;
}
int main()
{
    sayHi("Mike");
    return 0;
}*/


#include<iostream>
using namespace std;

void sayHi(string name, int age){
    cout<<"Hello "<<name<<" You are "<<age;

}
int main()
{
    sayHi("Priyanshu", 19);
    cout<<"\n";
    sayHi("Levi", 20);
    cout<<"\n";
    sayHi("Steve",20);
    cout<<"\n";
    sayHi("Mike",20);
    
    return 0;

}