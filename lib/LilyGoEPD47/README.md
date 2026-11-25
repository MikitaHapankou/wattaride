# LilyGoEPD47 — vendor driver placeholder

The LilyGO T5 4.7" e-ink driver (540x960, 16 grayscale) is large, so it is added
via PlatformIO `lib_deps` rather than vendored into this repo. See `platformio.ini`.

Our firmware only depends on the thin `EpdDriver` wrapper in `src/display/`.
