# wattaride

WattaRide — e-ink bike computer (LilyGO T5 4.7").

## Setup

1. Install [PlatformIO](https://platformio.org/) (VS Code extension or CLI).
2. Clone the repo and open it as a PlatformIO project.
3. Build and upload:

```sh
pio run -t upload -e t5-47
```

4. Open the serial monitor:

```sh
pio device monitor
```
