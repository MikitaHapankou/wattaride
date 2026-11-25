#include "display/epd.h"

// TODO: include the vendor header once lib_deps is enabled.
// #include <epd_driver.h>

bool EpdDriver::init() {
    // 1. Power on the EPD and wait for the panel to be ready.
    // 2. Set rotation (landscape) and allocate the frame buffer.
    // 3. Clear the buffer to white and push a full refresh.
    initialized_ = true;
    clear();
    return initialized_;
}

void EpdDriver::clear() {
    // Fill the frame buffer with white and trigger a full refresh.
    refresh(false);
}

void EpdDriver::refresh(bool partial) {
    // partial=true  -> update only dirty regions (1-2 Hz)
    // partial=false -> full screen refresh
    (void)partial;
}

void EpdDriver::drawTestPattern() {
    // Render 4 grayscale bands (0/25/50/100%) to verify the panel.
    // Stub until the vendor driver is linked.
}
