# 4 Servo Motors Arduino Project
This project demonstrates controlling **four micro servo motors** using an **Arduino Uno** in Tinkercad simulation.

The servo motors perform the following actions:
1. Run a Sweep motion from **0° to 180° and back** for **2 seconds**.
2. After that, all servo motors move to **90° position** and hold their position.

## Components Used

- Arduino Uno R3
- 4 × Micro Servo Motors
- Jumper Wires
- Tinkercad Circuits Simulation

## Circuit Connections

The signal pins of the servo motors are connected as follows:

| Servo Motor | Signal Pin |
|------------|------------|
| Servo 1 | Digital Pin 3 |
| Servo 2 | Digital Pin 5 |
| Servo 3 | Digital Pin 6 |
| Servo 4 | Digital Pin 9 |

Power connections:

- Red wire → Arduino 5V
- Black wire → Arduino GND

## Working Principle

The Arduino uses the `Servo.h` library to control the four servo motors.

During the simulation:
- All motors start sweeping between 0 and 180 degrees.
- The sweep motion continues for 2 seconds.
- Then all motors rotate to 90 degrees and remain fixed.

### Circuit Diagram

<img width="2878" height="1652" alt="لقطة شاشة 2026-07-17 104440" src="https://github.com/user-attachments/assets/21206797-a829-4a8e-92ec-2e87d3db5b58" />
