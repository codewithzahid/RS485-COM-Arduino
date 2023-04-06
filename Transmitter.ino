#include <SoftwareSerial.h>

#define MAX485_DE_RE 6

SoftwareSerial mySerial(10, 11); // RX, TX
byte message[] = "Hello from Arduino 1!"; // message to send

void setup() {
  pinMode(MAX485_DE_RE, OUTPUT);
  digitalWrite(MAX485_DE_RE, HIGH);
  
  mySerial.begin(9600); // start software serial
}

void loop() {
  digitalWrite(MAX485_DE_RE, HIGH);
  mySerial.write(message, sizeof(message)); // send message
  delay(1000);
}
