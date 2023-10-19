#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int pages;
    Book(string name){
        cout<<name<<endl;
    }


};
int main()
{
    Book book1("Priyanshu Tadhiyal's Autobiography");
    book1.title="Priyanshu Tadhiyal's Autobiography";
    book1.author="PriyanshuTadhiyal";
    book1.pages=500;

    Book book2("The subtle art of not giving a Fuck");
    book2.title="The subtle art of not giving a Fuck";
    book2.author="Navneet Tadhiyal";
    book2.pages=452;

    return 0;
}