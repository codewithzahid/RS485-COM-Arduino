# Arduino-RS485-Communication

Zahid Hasan  | Date: 06.04.2023 | www.micromotionbd.com


# Description:
In this code, we're using the SoftwareSerial library to create a serial communication between the two Arduino boards. The MAX485 transceiver is used to convert the
TTL-level signals to RS485 signals that can travel longer distances without signal loss. The MAX485_DE and MAX485_RE_NEG pins are used to control the direction of data
transmission.

In the sender code, we define the message to send and use mySerial.write() function to send the message through the MAX485 transceiver.In the receiver code, we use 
mySerial.readBytes() function to read the incoming message from the MAX485 transceiver and print it to the Serial Monitor using Serial.write() function.

# Components:
1. Arduino Uno x 2 pcs
2. RS485 Module
3. Connecting wires
