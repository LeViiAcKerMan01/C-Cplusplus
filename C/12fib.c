#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int n[] = {0, 1, 2 , 3, 4, 5, 6, 7, 8 };
    for(i=2; i<1000,(i-1)+(i-2) ){
        printf("%d\n",i);
    }
    return 0;
}