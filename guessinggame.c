#include <stdio.h>
#include <stdlib.h>

int main() {

  int guess;
  int randomNum = (rand() % 10) + 1;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  // Write a while loop here:
  while (guess != randomNum && tries < 10) {
  printf("Wrong guess, try again: ");
  scanf("%d", &guess);
  tries++;
  }

  if (guess == randomNum) {
    printf("You got it!\n");
  }
}