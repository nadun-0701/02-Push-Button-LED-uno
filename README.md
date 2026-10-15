# 02 - Push Button Controlled LED

This project demonstrates how to read digital input from a push button using Arduino's internal pull-up resistor (`INPUT_PULLUP`) to control an LED.

## Components Used
- Arduino Uno
- 1x Pushbutton
- 1x Red LED
- 1x 220Ω Resistor

## How It Works
- Pin 2 is configured with `INPUT_PULLUP`, keeping its default state `HIGH`.
- When the button is pressed, Pin 2 connects to `GND` and reads `LOW`.
- The Arduino detects the `LOW` state and turns the LED on Pin 13 `HIGH` (ON). When released, the LED turns `LOW` (OFF).

## Simulation Link
- [View on Wokwi](https://wokwi.com/projects/477971889924671489)
