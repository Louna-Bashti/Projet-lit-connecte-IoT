#include <Arduino.h>

// Declare the Analog pin on the Arduino board
int buttonPinG = A0;
int buttonPinD = A1;
int buttonPinM = A2;


void setup()
{
  // Establish the Serial connection with a baud rate of 9600
  Serial.begin(9600);
}
void loop()
{
  // Read the value of the input. It can vary from 0 - 1023
  int buttonValueG = analogRead(buttonPinG);
  int buttonValueD = analogRead(buttonPinD);
  int buttonValueM = analogRead(buttonPinM);


  bool gauche = false;
  bool droite = false;
  bool milieu = false;


  if (buttonValueG < 200)
  {
    gauche = false;


  }
  else{
    gauche = true;
  }
  if (buttonValueD < 200)
  {
    droite = false;


  }
  else{
    droite = true;
  }
  if (buttonValueM < 200)
  {
    milieu = false;


  }
  else{
    milieu = true;
  }

  // Print the value of the input to the Serial Monitor
  Serial.print("Gauche: ");
  Serial.print(gauche);
  Serial.print(" Droite: ");
  Serial.print(droite);
  Serial.print(" Milieu: ");
  Serial.println(milieu);
  delay(500);
}
