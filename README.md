## Program Discription
#### Get source code
```
git clone https://github.com/alkaza/CityScience.git
```
#### Enter source directory
```
cd CityScience/src
```
#### Compile
```
make all
```
#### Run
```
sudo ./control
```
#### Terminate
```
Ctrl-C
```


## Wiring Raspberry Pi 3 Model B V1.2

### DC Motor Driver L296N
```
Raspberry Pi 3 - DC Motor Driver

Physical Pin12 - EnA (BCM Pin18, WiringPi Pin1, PWM0)
Physical Pin13 - In1 (BCM Pin27, WiringPi Pin2)
Physical Pin15 - In2 (BCM Pin22, WiringPi Pin3)

Physical Pin33 - EnB (BCM Pin13, WiringPi Pin23, PWM1)
Physical Pin21 - In3 (BCM Pin6,  WiringPi Pin22)
Physical Pin29 - In4 (BCM Pin5,  WiringPi Pin21)

Physical Pin39 - Gnd (Ground)
```

#### Important
```
DC Motor Driver Vcc - Vcc Battery Holder

                    / Gnd Battery Holder
DC Motor Driver Gnd
                    \ Gnd Raspberry Pi 3
```

### Ultrasonic Sensor HC-SR04
```
Raspberry Pi 3 - Ultrasonic Sensor

Physical Pin2  - Vcc  (3v3 Power)
Physical Pin16 - Trig (BCM Pin23, WiringPi Pin4)
Physical Pin18 - Echo (BCM Pin24, WiringPi Pin5)
Physical Pin20 - Gnd  (Ground)
```

#### Note
- **Physical**  - Number corresponding to the pin's physical location on the header
- **BCM** - Broadcom pin number, commonly called "GPIO", these are the ones you probably want to use with RPi.GPIO and GPIO Zero
- **WiringPi**  - Wiring Pi pin number (shown as a tooltip), for Gordon Henderson's Wiring Pi library

#### Raspberry Pi Pinout
https://pinout.xyz/

## Power Supplies

### Raspberry Pi 3
#### Power Bank
- Capacity : 5200mAh 
- Output : 5V 2A

### DC Motor Driver
#### AAx6 Battery Holder
- Capacity : 1.5V x 6 = 9V
