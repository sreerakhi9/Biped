

#include<Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define ServoMax 665
#define ServoMin 127
#define ServoFreq 40
void setup() {
  // put your setup code here, to run once:
pwm.begin();
pwm.setPWMFreq(ServoFreq);
}

void loop() {
  // put your main code here, to run repeatedly:
pwm.setPWM(1,0,pulseWidth(83));//left hip up
pwm.setPWM(2,0,pulseWidth(75));//left hip low
pwm.setPWM(11,0,pulseWidth(130));//left knee
pwm.setPWM(4,0,pulseWidth(60));//left ankle up
pwm.setPWM(5,0,pulseWidth(92));//left ankle low
pwm.setPWM(6,0,pulseWidth(83));//right hip up
pwm.setPWM(7,0,pulseWidth(105));//right hip low
pwm.setPWM(8,0,pulseWidth(45));//right knee
pwm.setPWM(9,0,pulseWidth(115));//right ankle up
pwm.setPWM(10,0,pulseWidth(91));//right ankle low 
}
int pulseWidth(int angle)
{
int pulse=map(angle,0,180,ServoMin,ServoMax);
  return pulse;
}
