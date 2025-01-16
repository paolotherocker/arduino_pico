# Arduino Pico

## arduino-cli config

Install with homebrew:

```bash
brew install arduino-cli
```

Set the sketchook directory:

```bash
arduino-cli config set directories.user $HOME/develop/arduino_pico
```

Add the core URL:

```bash
arduino-cli config add board_manager.additional_urls https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
```

Install core library:

```bash
arduino-cli core install rp2040:rp2040
```

## arduino-cli cheatsheet

Compile:

```bash
arduino-cli compile -b arduino:rp2040:rp2040 Blink/Blink.ino
```

Upload

```bash
arduino-cli upload /home/user/Arduino/MySketch -p /dev/ttyACM0 -b arduino:avr:uno
```
