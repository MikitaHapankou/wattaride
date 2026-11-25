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
