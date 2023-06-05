#include <ESP8266WiFi.h>

// Pin assignments
const int buttonPin = D5;   
const int ledPin = D1;      

// Variables
int buttonState = HIGH;     
int lastButtonState = HIGH; 
int ledState = LOW;         
int x = 0;                  

void setup() {
  pinMode(buttonPin, INPUT);   
  pinMode(ledPin, OUTPUT);     

  digitalWrite(ledPin, ledState);  


void loop() {
  // Read the button state
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (LOW)
  if (buttonState == LOW && lastButtonState == HIGH) {
  
    x = 1 - x;  

    // Set the LED state based on the value of x
    if (x == 1) {
      digitalWrite(ledPin, HIGH);  
    } else {
      digitalWrite(ledPin, LOW);   
    }
  }

  lastButtonState = buttonState;  
}
