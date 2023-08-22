#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Answer: %d", num1+num2);
    return 0;
}