# ESP32-Industrial-IoT-Dev-Board

## Overview
Design an ESP32-based PCB for industrial GPIO control and monitoring. The board draws inspiration from the Siemens Logo and Arduino Pro Opta, with a focus on modularity, reliability, and manufacturability.

## Core Features
● ESP32-S3-WROOM module with external antenna.
● 8 digital inputs (opto-isolated) - Screw Terminal
● 4 relay outputs (10A, 250V AC) - Screw Terminal
● 4 analog inputs (0–10V) - Screw terminal
● Selection of GPIO headers for external components, sensors, and buttons (JTAG headers).
● Integrated RTC with battery backup.
● Holder for a single 18650 Li-ion battery and integrated charging circuit for battery backup functionality.
● USB-C header (90° angled) for programming and debugging

## Power
● Input: 12–24V DC.
● Output: 5V, 3.3V for peripherals.
● Reverse polarity protection and over-voltage safeguards.

## USER INTERFACE
● Integrated OLED display for real-time monitoring and conguration.
● 6 navigation buttons (4 directional and 2 for Yes/No or Select/Back functionality).
● NEOPIXEL LEDs for power, connectivity, and user-dened statuses.

## Additional Notes
● Compatible with DIN rail brackets for easy mounting in industrial environments.
● Example brackets include those with provisions for screw terminals.

![image](https://github.com/user-attachments/assets/a0e79a4e-3bb3-42bb-b006-b9aaf7425045)

**● Designed for SMD assembly via JLCPCB.
● Through-hole components (e.g., screw terminals, relays) will be hand-assembled and sourced from LCSC.**
