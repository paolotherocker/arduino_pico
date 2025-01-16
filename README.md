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
arduino-cli compile -b rp2040:rp2040:rpipico Blink/Blink.ino
```

After connecting the board for the first time, with the BOOTSEL button pressed:

```bash
arduino-cli upload Blink/Blink.ino -p UF2_Board -b rp2040:rp2040:rpipico
```

Check the new name of the port by doing

```bash
arduino-cli board list
```

It should now be something like this:

```bash
arduino-cli upload Blink/Blink.ino -p /dev/cu.usbmodem4301 -b rp2040:rp2040:rpipico
```
