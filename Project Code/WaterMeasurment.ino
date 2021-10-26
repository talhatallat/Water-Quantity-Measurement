/*
  Program Description: Meassures the water level in the tank using ultrasonic sensor 
  Program Name: Water Level Measurment System 
  Date: 24/11/2020
  Programmer Name: Talha Tallat
*/

#include <LiquidCrystal.h> // includes the LiquidCrystal Library
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

const float trigPin = 9;
const float echoPin = 10;
long t; //duration 
float maxHeight = 20.5; //maximum height of the tank in cm 
float v; // volume in cubic cm
float actual_height; 
float r = 10.9/2; // radius of tank in cm
float capacity; // capacity in liters
float distanceCm; // distance variable


void setup() {
lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(trigPin, OUTPUT); // transmited 
pinMode(echoPin, INPUT); // Recived 
}


void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); /* set the Trig on a High State for 10 µs 
to generate the ultrasound which sends 8 cycle sonic burst at the speed of light*/
digitalWrite(trigPin, LOW);
t = pulseIn(echoPin, HIGH); /*Burst will be received in the Echo pin 
which outputs the time in microseconds the sound wave traveled*/

distanceCm = t*0.034/2; /*where 0.034 is the speed of the soundin cm/us*/ 
/* The sound wave needs to travel forward and bounce backward. 
Multiply the received travel time value from the echo pin by 0.034/2 to get the distance in cm*/
distanceCm = distanceCm - 4.5; //offset correction to place the sensor 4.5cm higher than the tank
actual_height = maxHeight - distanceCm;
v = ((3.141592654*(r*r))*(actual_height));
capacity = v/1000; // capacity in litre 

lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
lcd.print("Distance: "); // Prints string "Distance" on the LCD
lcd.print(distanceCm); // Prints the distance value from the sensor
lcd.print(" cm");
delay(10);

lcd.setCursor(0,1);
lcd.print("Capacity: ");
lcd.print(capacity);
lcd.print(" litre");
delay(10);
}
