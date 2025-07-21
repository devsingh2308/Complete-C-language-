#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    //printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the number :  ");
        scanf("%d" , &guessed);

        if (guessed > randomNumber) {
            printf("Lower number please !\n");
        }
        else if (guessed < randomNumber){
            printf("Higher number please !\n");
        }
        else {
            printf("Congrats !! YOU WON \n");
        }
        

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d guessess\n", no_of_guesses);
    

    return 0;
}
