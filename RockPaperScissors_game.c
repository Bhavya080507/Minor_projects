#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player,computer;
    printf("choose 0 for rock,1 for paper and 2 for scissors\n");
    scanf("%d", &player);
    // Seed the random number generator
    srand(time(NULL));
    // Generate a random number between 0 and 2
    computer = rand() % 3;
    if(computer==0 && player==1){
        printf("You have won as the computer chose rock!");
    }
    else if(computer==1 && player==0){
        printf("You lost as the computer chose paper!");
    }
    else if(computer==0 && player==2){
        printf("You lost as the computer chose rock!");
    }
    else if(computer==1 && player==2){
        printf("You have won as the computer chose paper!");
    }
    else if(computer==2 && player==0){
        printf("You have won as the computer chose scissors!");
    }
    else if(computer==2 && player==1){
        printf("You lost as the computer chose scissors!");
    }
    else if(computer==player){
        printf("Its a tie");
    }
    else{
        printf("Please choose a number from 0,1 or 2 only");
    }
    return 0;
}
