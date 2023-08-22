#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int secretNumber=5;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    int outOfGuesses=0;

    while(guess!=secretNumber){
        if(guessCount<guessLimit){
            printf("Enter a number:");
            scanf("%d", &guess);
            guessCount++;

        }
        else{
            outOfGuesses==1;
        }
    }
    printf("You win!");

    return 0;

}