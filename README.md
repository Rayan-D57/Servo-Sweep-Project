# Servo-Sweep Project

This project controls four servo motors using an Arduino UNO. The system performs a sweep motion (0° to 180°) for 2 seconds, then locks all motors at 90°.

## Hardware Setup
- **Microcontroller:** Arduino UNO  
- **Servos:** 4x Micro Servos (SG90)

**Connections:**
- Servo 1 → Pin 2  
- Servo 2 → Pin 3  
- Servo 3 → Pin 4  
- Servo 4 → Pin 5  

**Power:**
Use an external 5V power supply to avoid instability.  
Make sure all grounds are connected to the Arduino GND.

## Software Logic
- **Library:** Uses `Servo.h` for PWM signal generation.  
- **Initialization:** All servos are attached in `setup()`.  
- **Sweep Sequence:** A `while` loop runs for 2000 ms, moving the servos back and forth between 0° and 180°.  
- **Holding Phase:** After 2 seconds, all servos receive a `write(90)` command to hold the center position.

## Demo Video

You can watch the demo video here:

[📹 Click to view the screen recording](Screen%20Recording%202026-07-08%20102117.mp4)
