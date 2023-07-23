//Jonathan Holmes (crait)
//October 18th, 2016
//Printing Text

//Include the Arduboy Library
#include <Arduboy2.h>
//Initialize the arduboy object
Arduboy2 arduboy;
//Initialize our counter variable
int counter;
//The setup() function runs once when you turn your Arduboy on
void setup() {
  //Start the Arduboy properly and display the Arduboy logo
  arduboy.begin();
  //Get rid of the Arduboy logo and clear the screen
  arduboy.clear();
  //Assign our counter variable to be equal to 0
  counter = 0;
}
//The loop() function repeats forever after setup() is done
void loop() {
  //Clear whatever is printed on the screen
  arduboy.clear();
  //Move the cursor back to the top-left of the screen
  arduboy.setCursor(0, 0);
  //Increase counter's value by 1
  if( arduboy.pressed(UP_BUTTON) ) {
    counter = counter + 1;
  }
  if( arduboy.pressed(DOWN_BUTTON) ) {
    counter = counter - 1;
  }
    if( counter == 42 ) {
    
    arduboy.setCursor(30, 30);
    arduboy.print("The answer to life");
  }
  counter = counter + 1;
  //Print out the value of counter
  arduboy.print(counter);
  //Refresh the screen to show whatever's printed to it
  arduboy.display();
}
