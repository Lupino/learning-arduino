/*
Blink
Turns on an LED on for one second, then off for one second, repeatedly.
*/

// Pin 9 has an LED connected on most Arduino boards.
// give it a name.

const int LED = 9;

// the setup routine runs once when you press reset:
void setup() {
    // initialize the digital pin as an output.
    pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    for (int i=0; i<256; i++) {
        analogWrite(LED, i);
        delay(10);
    }
    for (int i=255; i>=0; i--) {
        analogWrite(LED, i);
        delay(10);
    }
}
