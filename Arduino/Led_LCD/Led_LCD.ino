#include <LiquidCrystal.h>
 
// Pin del sensore HC-SR04

const int trigPin = 7;

const int echoPin = 8;
 
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
 
void setup() {

  lcd_1.begin(16, 2);

  lcd_1.print("Distanza:");

  Serial.begin(9600);
 
  pinMode(trigPin, OUTPUT); 

  pinMode(echoPin, INPUT);  

}
 
void loop() {

  lcd_1.setCursor(0, 1);
 
  

  lcd_1.print("                "); 

  lcd_1.setCursor(0, 1);
 
  

  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
 
  

  float durata = pulseIn(echoPin, HIGH);
 
  

  float cm = microsecondsToCentimeters(durata);
 
  

  lcd_1.print(cm);

  lcd_1.print(" cm");
 
  

  delay(500);

}
 
float microsecondsToCentimeters(float durata) {

  return durata / 29 / 2; 

}
 