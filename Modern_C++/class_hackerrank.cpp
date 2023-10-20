#include <iostream>
#include <sstream>
using namespace std;
class Student{
private:
int age;
int standard;
string first_name;
string last_name;
public:
/*
Enter code for class Student here.
Read statement for specification.
*/
void set_age(int aAge){
    aAge=age;
}
int get_age(){
    return age;
}

};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    cout << st.get_age() << "\n";
    return 0;
}