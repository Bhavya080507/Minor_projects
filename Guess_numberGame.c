/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user number_of_guesses the correct number, the program displays the number of
number_of_guesses the player used to arrive at the number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses=0;
    int guess;
    do{
        printf("guess the number-");
        scanf("%d", &guess);
        if(guess>randomNumber){
            printf("go lower!\n");
        }
        else if(guess<randomNumber){
            printf("go higher!\n");
        }
        number_of_guesses++;

    }while(guess!=randomNumber);
    printf("yay you guessed the number %d in %d number_of_guesses", randomNumber,number_of_guesses);

    //printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}
