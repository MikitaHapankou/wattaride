#include <Arduino.h>
#include "display/epd.h"

EpdDriver epd;

void setup() {
    Serial.begin(115200);

    if (!epd.init()) {
        Serial.println("EPD init failed");
        return;
    }

    epd.clear();
    epd.drawTestPattern();
    epd.refresh(true);
}

void loop() {
}
