#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    void set_age(int aAge){
        aAge=age;
    }
    int get_age(){
        return age;
    }
    void set_first_name(string aFirst_name){
        aFirst_name=first_name;
    }
    string get_first_name(){
        return first_name;
    }
    void set_last_name(string aLast_name){
        aLast_name=last_name;
    }
    string get_last_name(){
        return last_name;
    }
    void set_standard(int aStandard){
        aStandard=standard;
    }
    int get_standard(){
        return standard;
    }
   
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    
    
    return 0;
}