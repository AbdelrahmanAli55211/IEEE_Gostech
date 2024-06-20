#include <SoftwareSerial.h>
#define motor_speed_R 10 
#define motor_speed_L 9
#define motor_R1 5
#define motor_R2 4
#define motor_L3 3
#define motor_L4 2
#define tx 6
#define rx 7
SoftwareSerial bluetooth(rx,tx);
void setup()
{
  pinMode(motor_speed_R,OUTPUT);
  pinMode(motor_speed_L,OUTPUT);
  pinMode(motor_R1,OUTPUT);
  pinMode(motor_R2,OUTPUT);
  pinMode(motor_L3,OUTPUT);
  pinMode(motor_L4,OUTPUT);
  bluetooth.begin(9600);
  
  
  
}
void loop()
{
  if(bluetooth.available() > 0)
  {
    
    String dir = bluetooth.readStringUntil('\n');
    dir.trim();
    if (dir == "forward")
    {
      forward();
    }
    else if (dir=="backward")
    {
      backward();
      
    }
    else if (dir=="right")
    {
      right();
      
    }
    else if (dir=="left")
    {
      left();
      
    }
    else if (dir=="stop")
    {
      stop();
      
    }
  }
}
