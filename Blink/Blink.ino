/*
Blink
Turns on an LED on for one second, then off for one second, repeatedly.
*/

// Pin 9 has an LED connected on most Arduino boards.
// give it a name.

const int led = 9;

// the setup routine runs once when you press reset:
void setup() {
    // initialize the digital pin as an output.
    pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    for (int i=100; i<=1000; i=i+100) {
        digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(i);                 // wait for a second
        digitalWrite(led, LOW);   // turn the LED off by making the volage LOW
        delay(i);                 // wait for a second
    }
}
