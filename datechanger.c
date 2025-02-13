#include <stdio.h>

int main(void) {
  int month, day, year;
  int validInput = 0;
  // Standard date form
  while (!validInput) {
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  if (scanf("%d /%d /%d", &month, &day, &year) != 3) {
    printf("Invalid format, please try again.\n");
    while (getchar() != '\n');
    continue;
    }
  
  if (month < 1 || month > 12) {
      printf("Please enter a valid month (1-12).\n");
      continue;
    }
  if (day < 1 || day > 31) {
      printf("Please enter a valid day (1-31).\n");
      continue;
    }
  if (year < 1) {
      printf("Please enter a valid year (>0).\n");
      continue;
    }    
  validInput = 1; // if all checks pass, input is valid
  }
  // Print the month
  switch (month) {
    case 1: printf("January"); break;
    case 2: printf("Febuary"); break;
    case 3: printf("March"); break;
    case 4: printf("April"); break;
    case 5: printf("May"); break;
    case 6: printf("June"); break;
    case 7: printf("July"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
    default:
      printf("Invalid month");
      break;
  }

  // Print the day
  printf(" %d", day);

  // Print the suffix for a given day
  switch (day) {
  case 1: case 21: case 31:
     printf("st");
     break;
  case 2: case 22:
     printf("nd");
     break;
  case 3: case 23: 
     printf("rd");
     break;
  default:
     printf("th");
}


  // Print the year
  printf(", %d.\n", year);
  
  return 0;
}