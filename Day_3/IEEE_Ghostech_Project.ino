#include <SoftwareSerial.h>
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define tx 9
#define rx 10
SoftwareSerial obj(rx,tx);
void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  obj.begin(9600);
  
  }
void loop()
{
  if (obj.available() > 0 )
  {
    String name = obj.readStringUntil('\n');
    name.trim();
    if(name == "one")
    {
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);


    }
    else if(name == "four")
    {
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
    }
    else if(name == "five")
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
    
}
 else {
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
 }
 }
  
 }
