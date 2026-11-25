#pragma once

#include <Arduino.h>

// Thin wrapper over the LilyGO T5 4.7" e-ink driver (540x960, 16 grayscale).
class EpdDriver {
public:
    static constexpr uint16_t WIDTH  = 960;
    static constexpr uint16_t HEIGHT = 540;

    bool init();                       // power on, set rotation, clear to white
    void clear();                      // full white
    void refresh(bool partial = true); // partial refresh (1-2 Hz) by default
    void drawTestPattern();            // 4-grayscale test pattern

private:
    bool initialized_ = false;
    uint32_t initTimeoutMs_ = 3000;
};
