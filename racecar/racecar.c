#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race {
  int numberOfLoops;
  int currentLoop;
  char firstPlaceDriverName[10];
  char firstPlaceRaceCarColor[10];
};
struct RaceCar {
  char driverName[50];
  char raceCarColor[50];
  int totalLapTime;
};
// Print functions section
void printIntro(void) {
  printf("Welcome to the races! This is all digital but just use your imaginations, folks.\n\n");
}
void printCountDown() {
  printf("Racers get readyyyyy! In...\n5\n4\n3\n2\n1\nRace!\n\n");
}
void printFirstPlaceAfterLap(struct Race race){
  printf("Lap number %d: First place is %s in the %s race car.\n", race.currentLoop, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}
void printCongratulations(struct Race race){
  printf("\nLet's put our hands together for %s in the %s car for the superb performance. Thanks for coming out, and we'll see you all next time!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}


// Logic functions section
int calculateTimeToCompleteLap(){
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;
  return speed + acceleration + nerves;
}
void updateRaceCar(struct RaceCar* raceCar){
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}
void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime){
  strcpy(race->firstPlaceDriverName, raceCar2->driverName);
  strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
} else {
    strcpy(race->firstPlaceDriverName, raceCar1->driverName);
    strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    }
}
void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  struct Race race = {5, 1, "", ""};
  for (race.currentLoop = 1; race.currentLoop <= race.numberOfLoops; race.currentLoop++){
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
  }
  printCongratulations(race);
}

int main() {
	srand(time(0));
  struct RaceCar raceCar1 = {"Johnny", "pink", 0};
  struct RaceCar raceCar2 = {"Jen", "purple", 0};
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
  return 0;
}