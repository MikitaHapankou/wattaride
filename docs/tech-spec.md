# WattaRide — Technical Specification

## Component selection

| Component | Choice | Interface |
|-----------|--------|-----------|
| MCU + display | LilyGO T5 4.7" (ESP32-S3) | on-board |
| GNSS | u-blox MAX-M10S | I2C |
| Barometer | BMP280 | I2C (shared bus) |
| Storage | microSD 32 GB | SPI |
| Bike sensors | ANT+ receiver | UART |
| Phone link | BLE | on-board |
| Power | Li-Po 1S + charger | — |

## Integration

- I2C bus 1: MAX-M10S + BMP280 (different addresses).
- SPI: microSD; UART: ANT+ receiver.
- E-ink panel driven by the LilyGoEPD47 driver via `lib_deps`.

## Power budget (10 h target)

- E-ink refresh at 1–2 Hz keeps average draw low; ESP32-S3 enters light sleep between refreshes.
- 1S Li-Po (≈1200 mAh) sized for ≥10 h with GNSS at 1 Hz.
