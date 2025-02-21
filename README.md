# ESP32-Industrial-IoT-Dev-Board

## Overview
Design an ESP32-based PCB for industrial GPIO control and monitoring. The board draws inspiration from the Siemens Logo and Arduino Pro Opta, with a focus on modularity, reliability, and manufacturability.

## Core Features
- ESP32-S3-WROOM module with external antenna.  
- 8 digital inputs (opto-isolated) - Screw Terminal  
- 4 relay outputs (10A, 250V AC) - Screw Terminal  
- 4 analog inputs (0–10V) - Screw terminal  
- Selection of GPIO headers for external components, sensors, and buttons (JTAG headers).
- Dedicated I2C header for expansion.  
- Integrated RTC with battery backup.  
- Holder for a single 18650 Li-ion battery and integrated charging circuit for battery backup functionality.  
- USB-C header (90° angled) for programming and debugging.
- RS485 Screw Terminals (A-, B+ and extra GND) with daisy chaining.
- PoE Ethernet for the ESP32 to allow for Wired and Wireless comms. (suggested standard: 802.3af)

## Power
- Input: 12–24V DC. x3 GND Terminals, x3 VCC Terminals
- Output: 5V, 3.3V for peripherals.  
- Reverse polarity protection and over-voltage safeguards on the main VCC inputs.

## USER INTERFACE
- Master ON/OFF Switch which cuts all power to all features from the main VCC input.
- Master ON/OFF switch on the battery rail similar to VCC Master ON/OFF switch.
- ESP32 Reset push button.
- Integrated [OLED]( https://thepihut.com/products/1-3-oled-display-module-128x64) display for real-time monitoring and conguration.
- Rotary Encoder for display navigation with two additional push buttons for ‘select’ and ‘back’.
- Single onboard NEOPIXEL LED for custom statuses
- Multiple onboard LEDs for core functionality such as Power, LiPo Charge/Discharge - These should be small to ensure they don’t get confused with the NEOPIXEL output.

## Additional Notes
- Compatible with DIN rail brackets for easy mounting in industrial environments.  
- Example brackets include those with provisions for screw terminals.  

![image](https://github.com/user-attachments/assets/a0e79a4e-3bb3-42bb-b006-b9aaf7425045)

**- Designed for SMD assembly via JLCPCB.**  
**- Through-hole components (e.g., screw terminals, relays) will be hand-assembled and sourced from LCSC.**  
