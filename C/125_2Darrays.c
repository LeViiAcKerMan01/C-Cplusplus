#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j;
    int num[3][2]={
        {1, 2},
        {3, 4},
        {5, 6}
    };
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\n", num[i][j]);
        }
    }
    return 0;

}