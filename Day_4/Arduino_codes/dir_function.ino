void forward(){

analogWrite(motor_speed_R,150);
analogWrite(motor_speed_L,150);
digitalWrite(motor_R1,HIGH);
digitalWrite(motor_R2,LOW);
digitalWrite(motor_L3,HIGH);
digitalWrite(motor_L4,LOW);

  
  }
   void backward(){

analogWrite(motor_speed_R,100);
analogWrite(motor_speed_L,100);
digitalWrite(motor_R1,LOW);
digitalWrite(motor_R2,HIGH);
digitalWrite(motor_L3,LOW);
digitalWrite(motor_L4,HIGH);
  
  
  }
  void right(){

analogWrite(motor_speed_R,80);
analogWrite(motor_speed_L,80);
digitalWrite(motor_R1,LOW);
digitalWrite(motor_R2,HIGH);
digitalWrite(motor_L3,HIGH);
digitalWrite(motor_L4,LOW);
  
  
  }
  void left(){

analogWrite(motor_speed_R,80);
analogWrite(motor_speed_L,80);
digitalWrite(motor_R1,HIGH);
digitalWrite(motor_R2,LOW);
digitalWrite(motor_L3,LOW);
digitalWrite(motor_L4,HIGH);
  
  
  }
 
  void stop(){

analogWrite(motor_speed_R,0);
analogWrite(motor_speed_L,0);
digitalWrite(motor_R1,LOW);
digitalWrite(motor_R2,LOW);
digitalWrite(motor_L3,LOW);
digitalWrite(motor_L4,LOW);
  
  
  }
