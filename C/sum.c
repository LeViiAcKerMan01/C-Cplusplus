#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    int a[6];
    int i=1;
    int A;
    int N;
    scanf("%d", &t);
    while(i<=t){
        scanf("%d %d %d %d %d %d", &a[i]);
        printf("%d+%d+%d+%d+%d+%d=%d",a[0],a[1],a[2],a[3],a[4],a[5]);
        i=i+1;
    }
    return 0;
}