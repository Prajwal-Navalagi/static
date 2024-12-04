#include<Arduino.h>

void counter() {
    static int count = 0; // Retains its value between function calls
    count++; // Increment the counter

    // Print the current count to the Serial Monitor
    Serial.print("Count: ");
    Serial.println(count);
}

void setup() {
    // Initialize Serial Communication at 9600 baud
    Serial.begin(9600);
}

void loop() {
    counter(); // Call the counter function
    delay(1000); // Delay 1 second between calls
}

