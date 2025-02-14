#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clearInputBuffer() {
  int ch;
  while ((getchar()) != '\n' && ch != EOF);
}

int main() {

  int guess, randomNum, tries, level, maxNum;
  char playAgain;

  srand(time(NULL));

do {
    tries = 10;
    printf("Welcome to the guessing game!\n");
    printf("There are three levels of difficulty: (1) Easy, (2) Medium, and (3) Hard.\n");
    printf("Please enter the level of difficulty you would like to play (1,2, or 3): ");
    
    while (1) {
        if (scanf("%d", &level) != 1) {
            printf("Invalid input, please try again: ");
            clearInputBuffer();
            } else {
            clearInputBuffer();
            break;
            }
        }
        if(level == 1) {
        randomNum = (rand() % 10) + 1; maxNum = 10;
        } else if(level == 2) {
        randomNum = (rand() % 20) + 1; maxNum = 20;
        } else if(level == 3) {
        randomNum = (rand() % 30) + 1; maxNum = 30;
        } else {
        printf("Invalid level, please try again.\n");
        continue;
        }

        printf("I’m thinking of a number in the range 1-%d", maxNum);
        printf(", try to guess it: ");

        while (scanf("%d", &guess) != 1) {
        printf("Invalid input, please enter an integer guess: ");
        clearInputBuffer();
        }
        
        while (guess != randomNum && tries > 1) {
        tries--;
        printf("Tries left: %d \tWrong guess, try again: ", tries);
        scanf("%d", &guess);
        
        } 

        if (guess == randomNum) {
            printf("You got it!\n");
        } else {
            printf("\nYou ran out of tries! The number was %d\n", randomNum);
        }

        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &playAgain);
        printf("\n");
        
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}