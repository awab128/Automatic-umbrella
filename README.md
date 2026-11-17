# ☂️ Automatic Convertible Umbrella

My graduation project for the B.Sc. in Mechatronics Engineering (The Future University, Khartoum, 2020). It got an **A+** and was ranked among the **top 10** projects at the university.

The umbrella **opens and closes on its own** according to the weather. An Arduino reads a rain sensor and a temperature sensor and drives two motors.

## How it works

| Input | Reading | Action |
|---|---|---|
| Rain sensor (analog A0) | Heavy rain | Close motor runs for 1 s |
| Temperature sensor, LM35-style (analog A1) | ≤ 18 °C | Open motor runs for 1 s |
| Temperature sensor | ≥ 38 °C | Close motor runs for 1 s |

The rain level (heavy, moderate or none) is also printed to the serial monitor every 250 ms.

## Hardware
- Arduino board
- Analog rain sensor module
- Analog temperature sensor (10 mV/°C)
- Two motor outputs (pins 12 and 13) for the open and close drives

## Code
All the logic is in [`proj-code.ino`](proj-code.ino). Open it in the Arduino IDE and upload it to the board.

**Stack:** Arduino · C++ · sensors · motor control
