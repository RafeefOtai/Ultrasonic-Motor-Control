# Motor Control & Obstacle Detection

## Task 1 - Simulation: 4 DC Motor Direction Control
 
[![Open in Tinkercad](https://img.shields.io/badge/Tinkercad-Open_Simulation-1BA1E2?style=for-the-badge&logo=tinkercad&logoColor=white)](https://www.tinkercad.com/things/j2X1YDF09co-4-motordirectioncontrol?sharecode=woP2TpF1_6kShBDzG9e9QKXvusG61zbplJWwiBv_Rbw)
 
4 DC motors controlled through an L293D driver, cycling through a fixed movement sequence:
 
| Step | Direction | Duration |
|:--|:--|:--|
| 1 | Forward | 30s |
| 2 | Backward | 60s |
| 3 | Alternating right / left turns × 6 | 5s per turn |

## Task 2 - Hardware: Servo + Ultrasonic Obstacle Detection
 
[![Watch Demo](https://img.shields.io/badge/Google_Drive-Watch_Demo-4285F4?style=for-the-badge&logo=googledrive&logoColor=white)](https://drive.google.com/file/d/1cq_KWtCS-gV-_ofqcZbaVpP74zWAxmql/view?usp=drivesdk)
 
An HC-SR04 ultrasonic sensor tracks distance in real time. When an object is detected within 10 cm, a servo motor rotates to 90°; it returns to 0° once the object moves away.
 
## Repo Contents
 
- `Task1_MotorControl.ino` — code for the simulation task
- `Task2_UltrasonicServo.ino` — code for the hardware task
