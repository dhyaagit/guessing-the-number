#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int choice;
do
{
    // pick a random number 

    int secretNumber = 0, guessNumber , count=0 ;

    srand(time(0));              // initialize random seed
    secretNumber = rand() % 100 + 1; // number from 1 to 100

    printf("Now i'm guessing of a number! \n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guessNumber);
        count++;
        
        if (secretNumber < guessNumber)
        {
            printf("too high guessing!\n\n");
        }else if (secretNumber > guessNumber)
        {
            printf("too low guessing!\n\n");
        }else
        {
            printf("Congratulation, you guessed it in %d time!\n\n", count);
        }
    } while (secretNumber != guessNumber);

    
    printf("do you want to play again? (yes == 1 , No == 0): \n");
    scanf("%d", &choice);

} while (choice == 1);

printf("thanks for playing.");
return 0;
}