#ifndef __ROBOT_H__
#define __ROBOT_H__

/* WiringPi pin numbering scheme */
/* Ultrasonic sensor pins */
#define Trig	4
#define Echo	5
/* Motor driver pins */
/* Motor A */
#define MotorEnA	1
#define MotorIn1	2
#define MotorIn2	3
/* Motor B */
#define MotorIn3	21
#define MotorIn4	22
#define MotorEnB	23

/* Direction modes */
#define FW    'F'
#define BW    'B'
#define RIGHT 'R'
#define LEFT  'L'
#define INIT  'I'

/* Track flags */
extern volatile int turningR;
extern volatile int turningL;
extern volatile int goingFW;
extern volatile int goingBW;
/* Track current speed */
extern volatile int speed;

/* Setup function */
extern void setup       (void);
/* Motor control functions */
extern void move        (char dir, int maxSpeed, int minSpeed);
/* Calulate distance */
extern float calc_dist  (void);

/* Initialization functions */
extern void ultraInit   (void);
extern void motorInit   (void);
/* Motor helper functions */
extern void setSpeed    (int speedA, int speedB);
extern void setDir      (char dir);
extern void goFW        (void);
extern void goBW        (void);
extern void turnR       (void);
extern void turnL       (void);
extern void brake       (void);
extern void stop        (void);
/* Signal handler */
extern void sigHandler  (int sigNo);

#endif
