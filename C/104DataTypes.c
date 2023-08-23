#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age= 19;  // integer
    double gpa= 6.35;  // float
    char grade= 'A';  // character
    char name[]= "Priyanshu Tadhiyal";  // String
    char phrase[]= "Priyanshu Academy";  // String

    printf("My name is %s\n", name);
    printf("I am %d years old\n",age);
    printf("My gpa in first semester was %f\n",gpa);
    printf("I received %c grade in my first semester\n",grade);
    printf("The name of my academy is %s\n",phrase);

    return 0;
}
/*
NOTES:

while taking string as an input you need to use scanset character
%[^\n]s - scanset character

*/