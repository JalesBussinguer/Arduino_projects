/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

int led_amarelo = 16;
int led_red = 14;
int led_verde = 15;
int led_x = 0;

void setup() {
  pinMode(led_amarelo, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(led_red, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_x, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_amarelo, HIGH);
  delay(500);                      // Wait for a second
  digitalWrite(led_amarelo, LOW);  
  delay(1000);
  digitalWrite(led_red, HIGH);
  delay(500);                      // Wait for a second
  digitalWrite(led_red, LOW);
  delay(1000);
  digitalWrite(led_verde, HIGH);
  delay(500);                      // Wait for a second
  digitalWrite(led_verde, LOW);  
  delay(1000);
  digitalWrite(led_x, HIGH);
  delay(500);                      // Wait for a second
  digitalWrite(led_x, LOW);  
  delay(1000);
  
}
