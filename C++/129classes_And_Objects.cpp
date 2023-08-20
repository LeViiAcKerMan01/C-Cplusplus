#include<iostream>
using namespace std;

class book{
    public:
    string title;
    string author;
    int pages;

};

int main()
{
    book book1;
    book1.title="Harry Potter";
    book1.author="JK Rowling";
    book1.pages=500;

    book book2;
    book2.title="Lord of the Rings";
    book2.author="Tolkein";
    book2.pages=700;
     
    cout<<book2.author;
    return 0;


}