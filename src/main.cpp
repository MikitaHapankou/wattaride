#include <Arduino.h>
#include "display/epd.h"
#include "ui/ride_view.h"

EpdDriver epd;
RideView rideView(epd);

void setup() {
    Serial.begin(115200);

    if (!epd.init()) {
        Serial.println("EPD init failed");
        return;
    }

    rideView.show();   // restore ride view after reboot
}

void loop() {
    rideView.update(); // partial refresh at 1-2 Hz
}
