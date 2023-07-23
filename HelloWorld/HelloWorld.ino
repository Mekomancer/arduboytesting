//Jonathan Holmes (crait)
//October 18th, 2016
//Printing Text

#include <Arduboy2.h>
Arduboy2 arduboy;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.clear();
  arduboy.print("Holmes is cool!");
  arduboy.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
