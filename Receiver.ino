#include <SoftwareSerial.h>

#define MAX485_DE_RE 8

SoftwareSerial mySerial(10, 11); // RX, TX
byte message[100]; // buffer to store incoming message
int messageSize; // size of incoming message

void setup() {
  pinMode(MAX485_DE_RE, OUTPUT);
  digitalWrite(MAX485_DE_RE, LOW);
  
  mySerial.begin(9600); // start software serial
  Serial.begin(9600); // start hardware serial
}

void loop() {
  digitalWrite(MAX485_DE_RE, LOW);
  
  if (mySerial.available()) { // if data available
    messageSize = mySerial.readBytes(message, 100); // read message
    Serial.write(message, messageSize); // print message to serial monitor
  }
  delay(1000);
}
