#include "Pins.h"

void loop() {
  const char text[] = "42069 Recieving";
  transmitter.write(&text, sizeof(text));
  delay(1000);
}
