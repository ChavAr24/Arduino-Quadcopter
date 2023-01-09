#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 transmitter(7, 8); // CE, CSN

const byte address[6] = "42069";

void setup() {
  transmitter.begin();
  transmitter.openWritingPipe(address);
  transmitter.setPALevel(RF24_PA_MIN);
  transmitter.stopListening();
}
