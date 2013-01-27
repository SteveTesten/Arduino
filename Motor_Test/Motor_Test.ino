/*
Motor Motion Test

Motor 1: Base
*/

#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
int runtime=500; //ms

void setup() 
{
  Serial.begin(9600);
  Serial.println("Select Move:");
  Serial.println("Motor 1 - (1: CCW, q: CW)");
  Serial.println("Motor 2 - (2: Up, w: Down)");
  Serial.println("Motor 3 - (3: Up, e: Down)");
  Serial.println("Motor 4 - (4: Up, r: Down)");
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);
}

void loop()
{  
  if (Serial.available() > 0)
  {
    int incoming_byte = Serial.read();
    
    switch (incoming_byte)
    {
      case 49: //Key "1"
        Serial.println("Moving M1 Forward.");
        motor1.run(FORWARD);
        delay (runtime);
        motor1.run(RELEASE);
        break;
      case 113: //Key "q"
        Serial.println("Moving M1 Backward.");
        motor1.run(BACKWARD);
        delay (runtime);
        motor1.run(RELEASE);
        break;
      case 50://Key "2"
        Serial.println("Moving M2 Forward.");
        motor2.run(FORWARD);
        delay (runtime);
        motor2.run(RELEASE);
        break;
      case 119://Key "w"
        Serial.println("Moving M2 Backward.");
        motor2.run(BACKWARD);
        delay (runtime);
        motor2.run(RELEASE);
        break;
      case 51://Key "3"
        Serial.println("Moving M3 Forward.");
        motor3.run(FORWARD);
        delay (runtime);
        motor3.run(RELEASE);
        break;
      case 101://Key "e"
        Serial.println("Moving M3 Backward.");
        motor3.run(BACKWARD);
        delay (runtime);
        motor3.run(RELEASE);
        break;
      case 52://Key "4"
        Serial.println("Moving M4 Forward.");
        motor4.run(FORWARD);
        delay (runtime);
        motor4.run(RELEASE);
        break;
      case 114://Key "r"
        Serial.println("Moving M4 Backward.");
        motor4.run(BACKWARD);
        delay (runtime);
        motor4.run(RELEASE);
        break;
      default:
        Serial.println("Unassigned key.  Enter 1, 2, 3, 4, q, w, e, or r");
    }
  }
}
