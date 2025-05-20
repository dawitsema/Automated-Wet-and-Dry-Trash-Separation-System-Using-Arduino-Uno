# Automated Wet and Dry Trash Separation System

## Overview

This project implements an automated system for separating wet and dry trash using an Arduino Uno microcontroller. The system uses a moisture sensor to detect the moisture content of waste items and automatically sorts them into appropriate bins using LED indicators.

## Features

- Real-time moisture detection and trash classification
- Moving average filter for stable readings
- Calibration mode for threshold adjustment
- Visual feedback using LED indicators
- Serial monitoring for debugging and status updates
- Error detection and handling
- Debounced button input for calibration

## Hardware Requirements

- Arduino Uno
- Moisture Sensor (Analog)
- 2 LEDs (Red and Green)
- Push Button
- Resistors (220Ω for LEDs)
- Jumper Wires
- Breadboard
- Power Supply (USB or External)

## Pin Configuration

- Moisture Sensor: Analog Pin A0
- Red LED: Digital Pin 8
- Green LED: Digital Pin 9
- Calibration Button: Digital Pin 2 (with internal pull-up)

## Circuit Diagram

```
Arduino Uno    |    Component
--------------|----------------
A0            |    Moisture Sensor
8             |    Red LED (with 220Ω resistor)
9             |    Green LED (with 220Ω resistor)
2             |    Push Button (with internal pull-up)
GND           |    Common Ground
5V            |    Power Supply
```

## Software Requirements

- Arduino IDE (version 1.8.x or later)
- Arduino AVR Boards package

## Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/dawitsema/Automated-Wet-and-Dry-Trash-Separation-System-Using-Arduino-Uno.git
   ```
2. Open the `trash_separator.ino` file in Arduino IDE
3. Install required libraries (if any)
4. Select Arduino Uno as your board
5. Upload the code to your Arduino

## Usage

1. **Initial Setup**

   - Connect all components according to the pin configuration
   - Upload the code to Arduino
   - Open Serial Monitor (9600 baud) for status updates

2. **Normal Operation**

   - Place trash items on the moisture sensor
   - Red LED indicates dry trash
   - Green LED indicates wet trash
   - Status messages are displayed on Serial Monitor

3. **Calibration**
   - Press the calibration button
   - Place a known dry item on the sensor
   - Wait for calibration to complete
   - System will automatically adjust the threshold

## Project Structure

- `trash_separator.ino`: Main Arduino sketch file
- `updated embeded system assignment.pdf`: Project documentation and report
- `updated embeded system assignment.docx`: Project documentation (Word format)

## Technical Details

- Sampling Rate: 10Hz (100ms delay between readings)
- Moving Average Window: 10 samples
- Calibration Samples: 20 readings
- Default Dry Threshold: 700 (adjustable through calibration)
- Serial Communication: 9600 baud

## Troubleshooting

1. **Invalid Readings**

   - Check moisture sensor connections
   - Verify power supply
   - Ensure sensor is clean and dry

2. **LED Not Working**

   - Verify LED connections
   - Check resistor values
   - Test with different pins

3. **Calibration Issues**
   - Ensure button is properly connected
   - Check Serial Monitor for calibration status
   - Try recalibrating with a different dry item

## Contributing

Feel free to submit issues, fork the repository, and create pull requests for any improvements.

## License

This project is open source and available under the MIT License.

## Acknowledgments

- Original project by dawitsema
- Arduino community for support and resources
- Contributors and testers

## Contact

For questions and support, please open an issue in the GitHub repository.

---

_Note: This project is designed for educational purposes and can be modified for specific requirements._
