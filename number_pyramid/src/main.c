#include <stdio.h>
#include <stdlib.h>
#include "number_pyramid.h"
#include <string.h>

void clearInputBuffer() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(void) {

int num; 
char playAgain; 

do {

printf("Welcome to the number pyramid printer!\n" );
printf("Type a number between 1-20 to get started: ");

while (scanf("%d", &num) != 1 || num < 1 || num > 20) {
      printf("Invalid input, please try again: ");
      clearInputBuffer();
      }

//clearInputBuffer();

print_pattern(num);

printf("Would you like to play again? (y/n): ");
scanf(" %c", &playAgain);
clearInputBuffer();
printf("\n");

} while (playAgain == 'y' || playAgain == 'Y');

printf("Thanks for playing!");
return 0;
}