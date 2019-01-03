#include "SR04.h"
//connect ultrasonic module to 5V and ground, connect TRIG_PIN to port 12, ECHO_PIN to port 11
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
int green =6;
int blue = 7;
int white = 2;
int yellow = 3;
int red = 4;

void setup() {
   Serial.begin(9600);
   delay(1000);
   //setting the output pins for the corrosponding leds
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);
   pinMode(white, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(red, OUTPUT);
   //turn them off as default 
   digitalWrite(green, LOW);
   digitalWrite(blue, LOW);
   digitalWrite(white, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   //use Shift + Ctrl + M to open serial monitor
   delay(10);
   if (a < 5){
   digitalWrite(green, LOW);
   digitalWrite(blue, LOW);
   digitalWrite(white, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
   }
   else if (a >= 5 &&a < 10){
   digitalWrite(green, HIGH);
   digitalWrite(blue, LOW);
   digitalWrite(white, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
   }
   else if (a >= 10 && a < 20) {
   digitalWrite(green, HIGH);
   digitalWrite(blue, HIGH);
   digitalWrite(white, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
    }
   else if (a >=20 && a < 30){
   digitalWrite(green, HIGH);
   digitalWrite(blue, HIGH);
   digitalWrite(white, HIGH);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);}
   else if (a >=30 && a < 40){
   digitalWrite(green, HIGH);
   digitalWrite(blue, HIGH);
   digitalWrite(white, HIGH);
   digitalWrite(yellow, HIGH);
   digitalWrite(red, LOW);
   }
   else{
   digitalWrite(green, HIGH);
   digitalWrite(blue, HIGH);
   digitalWrite(white, HIGH);
   digitalWrite(yellow, HIGH);
   digitalWrite(red, HIGH);
   }
}
