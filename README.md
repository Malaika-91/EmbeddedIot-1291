# Assignment 1
# Embedded IoT Task A - Fall 2025


**Name:** Malaika  
**Reg#:** 1291  

## Wokwi Simulation Link
[TaskA](https://wokwi.com/projects/445792785933572097)

## Components
- ESP32 Dev Board
- 3 LEDs
- 2 Push Buttons
- 1 Buzzer
- 1 OLED 128x64

## Pin Map

| Component | Pin |
|-----------|-----|
| LED1      | 4   |
| LED2      | 19  |
| LED3      | 18  |
| Button 1  | 32  |
| Button 2  | 33  |
| Buzzer    | 27  |
| OLED SDA  | 21  |
| OLED SCL  | 22  |

## Features
1. Button 1 cycles through LED modes:
   - All OFF
   - Alternate Blink
   - All ON
   - PWM Fade
2. Button 2 resets LEDs to OFF.
3. OLED displays current mode.
4. Buzzer gives audio feedback on button press.

## Screenshots
<img width="898" height="787" alt="image" src="https://github.com/user-attachments/assets/ba6c5ccb-0d84-435f-8810-6fb172670483" />

<img width="898" height="498" alt="image" src="https://github.com/user-attachments/assets/d7ff1ab7-292e-431e-9c8a-78b039495ffa" />
<img width="898" height="505" alt="image" src="https://github.com/user-attachments/assets/93ba1463-a160-4605-8ee9-3213eff5c68d" />
<img width="898" height="505" alt="image" src="https://github.com/user-attachments/assets/4f96e9e6-4de1-4e8e-97a0-360009c30fb9" />
<img width="898" height="505" alt="image" src="https://github.com/user-attachments/assets/7e5d9cd3-0110-4096-9d2b-634d67034680" />
# Embedded IoT Assignment 1 - Task B



## Project Overview

This project demonstrates a single-button press detection system on an ESP32, with LED and buzzer outputs and OLED display feedback. The system differentiates between **short presses** and **long presses**:

- **Short press (<1.5s):** Toggles an LED ON/OFF  
- **Long press (≥1.5s):** Activates a buzzer for 1 second  

The OLED screen displays the current action and system status.

---

## Pin Map

| Component | Pin |
|-----------|-----|
| LED       | 18  |
| Button    | 33  |
| Buzzer    | 27  |
| OLED SDA  | 21  |
| OLED SCL  | 22  |



## Features

1. **Short Press:** Toggles LED and displays “LED ON/OFF” on OLED.  
2. **Long Press:** Turns on buzzer for 1 second and displays “Buzzer ON” on OLED.  
3. OLED always returns to **“System Ready – Press Button”** after each action.  
4. Button press detection is implemented with **debouncing logic**.

---

## Screenshots


<img width="894" height="797" alt="image" src="https://github.com/user-attachments/assets/47e5ebed-1914-4f8f-8df0-dd761888da2e" />

<img width="898" height="505" alt="image" src="https://github.com/user-attachments/assets/63884939-9b06-4867-a33c-cdd9b7634eea" />
<img width="898" height="505" alt="image" src="https://github.com/user-attachments/assets/e07b7fb5-403d-4b67-889a-2e51118a3845" />



## Wokwi Simulation

[Click here to open the Wokwi project of TaskB](https://wokwi.com/projects/445796578762516481)
