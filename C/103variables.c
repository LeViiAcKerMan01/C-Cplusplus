#include<stdio.h>
#include<stdlib.h>

int main()
{
    // VARIABLES
    char cName[]= "Tom";
    char cAge[]= "35";
    printf("There was a man named %s\n", cName);
    printf("He was %s years old\n", cAge);
    printf("He really liked the name %s\n", cName);
    printf("But he did not like being %s", cAge);

    return 0;
    /*   Some Corrections:

    char cAge[] is a string array so use %s format specifier.

    */
    
    }
