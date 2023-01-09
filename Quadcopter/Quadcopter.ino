#include "Pins.h"

void loop() {
  if (reciever.available()) {
    char text[32] = "";
    reciever.read(&text, sizeof(text));
    Serial.println(text);
  }
}
