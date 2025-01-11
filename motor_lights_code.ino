#include <Servo.h>

//LIGHT SETUP

#define RED_SET_TIME 15000
#define GREEN_SET_TIME 15000

#define LIGHT_1_RED 8
#define LIGHT_1_GREEN 10

#define GREEN_LIGHT 0
#define RED_LIGHT 1

short currentTimer = 0;

unsigned long gulStart_Timer = 0;

unsigned short gusSet_Time[2] = {GREEN_SET_TIME, RED_SET_TIME};

short gsWhich_Light_Index = RED_LIGHT;

short dailyCounter = 0;

//SERVO SETUP

#include <Servo.h> 

int servoPin = 3; 

Servo Servo1; 

//CODE HERE

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Servo1.attach(servoPin); 
  pinMode(LIGHT_1_RED, OUTPUT);
  pinMode(LIGHT_1_GREEN, OUTPUT);

  //gulStart_Timer = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  currentTimer = millis();
  if ((dailyCounter < 6) && (currentTimer % 10800000 == 0))/*replace this number with 3 hours*/
  {
    dailyCounter++;
    gsWhich_Light_Index++;
    if (gsWhich_Light_Index > RED_LIGHT)
    {
      gsWhich_Light_Index = GREEN_LIGHT;
    }

    gulStart_Timer = millis();

    if (gsWhich_Light_Index == GREEN_LIGHT)
    {
      digitalWrite(LIGHT_1_GREEN, HIGH);
      digitalWrite(LIGHT_1_RED, LOW);
      delay(15000); /*replace this number with 15 secs*/
      digitalWrite(LIGHT_1_GREEN, LOW);
      digitalWrite(LIGHT_1_RED, LOW);
      delay(10785000); /*delay(3hours - 15 secs)*/

    }
    else if (gsWhich_Light_Index == RED_LIGHT)
    {
      digitalWrite(LIGHT_1_GREEN, LOW);
      digitalWrite(LIGHT_1_RED, HIGH);
      delay(15000); /*replace this number with 15 secs*/
      digitalWrite(LIGHT_1_GREEN, LOW);
      digitalWrite(LIGHT_1_RED, LOW);
      delay(15000); /*delay(15 secs)*/
      /*motor code here*/
      Servo1.write(0); 
      delay(500); 
      // Make servo go to 90 degrees 
      Servo1.write(90); 
      delay(500); 
      // Make servo go to 180 degrees 
      Servo1.write(180); 
      delay(500);
      Servo1.write(270);
      delay(500);
      delay(10768000);

    }
  }
  else if ((dailyCounter == 6) && ((currentTimer - gulStart_Timer) % 20000 == 0)) /*replace this number with 3 hours*/
  {
    dailyCounter = 0;
    delay(21600000); /*replace number with 6 hours*/
  } 
}
