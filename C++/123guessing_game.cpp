#include<iostream>
using namespace std;

int main()
{
    int secretNum=7;
    int guess;
    int guessCount=0;
    int guessLimit=4;
    bool outOfGuesses=false;
    while(secretNum!=guess){
        if(guessCount<guessLimit){
            cout<<"Enter number:";
            cin>>guess;
            guessCount++;

        }
        else{
            outOfGuesses=true;
        }

    }
    if(outOfGuesses){
        cout<<"You lose!";

    }else{
        cout<<"You win!";
    }
    return 0;
}
// Need some more work to work actully!