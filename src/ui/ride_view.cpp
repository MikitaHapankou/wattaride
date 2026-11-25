#include "ui/ride_view.h"
#include "config.h"

void RideView::show() {
    // Draw all ride fields. Missing data is rendered as "—".
    drawField("SPD",  "---");
    drawField("DST",  "---");
    drawField("TIME", "00:00");
    drawField("ALT",  "---");
    drawField("TMP",  "---");
    drawField("HR",   "---");
    drawField("CAD",  "---");
    epd_.refresh(false);
}

void RideView::update() {
    uint32_t now = millis();
    if (now - lastRefreshMs_ < config::REFRESH_MS) {
        return;
    }
    lastRefreshMs_ = now;
    // Only fields marked dirty are redrawn (unchanged values are skipped).
    epd_.refresh(true);
}

void RideView::markDirty() {
    // Set the dirty flag for a field; unused in this stub.
}

void RideView::drawField(const char* label, const char* value) {
    // Position label and value using config::FONT_SPEED_LG / FONT_FIELD_MD / FONT_UNIT_SM.
    (void)label;
    (void)value;
}
