#include <SPI.h>
#include <nRF24L01.h>                                          
#include <RF24.h>

RF24 reciever(7, 8); // CE, CSN

const byte address[6] = "42069";

void setup() {
  Serial.begin(9600);
  reciever.begin();
  reciever.openReadingPipe(0, address);
  reciever.setPALevel(RF24_PA_MIN);
  reciever.startListening();
}
