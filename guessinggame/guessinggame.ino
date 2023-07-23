#include <Arduboy2.h>
Arduboy2 arduboy;
int playerwin;
int attempts;
int guessednumber;
int randomnumber;

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.initRandomSeed();
  playerwin = 0;
  attempts = 0;
  guessednumber = 0;
  randomnumber = 0;
}

void loop() {
  arduboy.clear();
  arduboy.setCursor(0, 0);
  arduboy.print("Attempt: ");
  arduboy.print(attempts);
  arduboy.print("\n");
  arduboy.print("Number to guess: ");
  arduboy.print(guessednumber);
  arduboy.display();
}
