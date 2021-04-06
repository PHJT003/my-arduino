#include <Arduino.h>

// declare variables
int builtin_led = 13;   // LED pin number
int duty_cycle[2] = {20, 40};    // ON-OFF time (ms)

void setup() {
  // put your setup code here, to run once:
pinMode(builtin_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(builtin_led, HIGH);    // turn LED ON
  delay(duty_cycle[0]);
  digitalWrite(builtin_led, LOW);     // turn LED OFF
  delay(duty_cycle[1]);

}
