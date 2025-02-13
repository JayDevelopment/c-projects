#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

  double weight;
  char input[100];
  int planetNum;
  int validInput = 0;

  while (1) { 
  printf("Please enter your current earth weight: ");
  if (scanf("%lf", &weight) != 1) {
    fprintf(stderr, "\nPlease enter a valid weight.\n\n");
    while(getchar() != '\n');
  } else {
      while(getchar() != '\n');
      break;
    }
  }

  printf("\n I have information for the following planets:\n\n");
  printf("\t1. Mercury \t2. Venus \t3. Mars \t4. Jupiter\n");
  printf("\t5. Saturn \t6. Uranus \t7. Neptune\n\n");

  while (!validInput) {
    printf("Which planets are you visiting? (Enter number or name): ");

    if(fgets(input, sizeof(input), stdin) == NULL) {
      fprintf(stderr, "Please enter a valid planet.\n");
      continue;
    }
    
    input[strcspn(input, "\n")] = '\0';

    int isNumeric = 1;
    for (int i = 0; input[i] != '\0'; i++) {
      if (!isdigit((unsigned char)input[i])) {
        isNumeric = 0; break;
      }
    }
    if(isNumeric) {
    planetNum = atoi(input);
    switch (planetNum) {
      case 1: weight *= .38; validInput = 1; break; // Mercury
      case 2: weight *= .91; validInput = 1; break; // Venus
      case 3: weight *= .38; validInput = 1; break; // Mars
      case 4: weight *= 2.34; validInput = 1; break; // Jupiter
      case 5: weight *= 1.06; validInput = 1; break; // Saturn
      case 6: weight *= .92; validInput = 1; break; // Uranus
      case 7: weight *= 1.19; validInput = 1; break; // Neptune
      default:
        printf("\nPlease enter a valid planet number.\n\n");
        break;
      }
      } else {
        if (strcasecmp(input, "Mercury") == 0) {
          weight *= .38; validInput = 1;
        } else if (strcasecmp(input, "Venus") == 0) {
          weight *= 0.91; validInput = 1;
        } else if (strcasecmp(input, "Mars") == 0) {
          weight *= 0.38; validInput = 1;
        } else if (strcasecmp(input, "Jupiter") == 0) {
          weight *= 2.34; validInput = 1;
        } else if (strcasecmp(input, "Saturn") == 0) {
          weight *= 1.06; validInput = 1;
        } else if (strcasecmp(input, "Uranus") == 0) {
          weight *= 0.92; validInput = 1;
        } else if (strcasecmp(input, "Neptune") == 0) {
          weight *= 1.19; validInput = 1;
        } else {
          printf("\nPlease give a valid planet name.\n\n");
      }
    }
  }
  printf("\nYour weight: %.2lf\n\n", weight);
  return 0;
  }

