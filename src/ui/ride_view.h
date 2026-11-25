#pragma once

#include <Arduino.h>
#include "display/epd.h"

class RideView {
public:
    explicit RideView(EpdDriver& epd) : epd_(epd) {}

    void show();    // draw full layout with all fields
    void update();  // partial refresh at 1-2 Hz

private:
    void markDirty();
    void drawField(const char* label, const char* value);

    EpdDriver& epd_;
    uint32_t lastRefreshMs_ = 0;
};
