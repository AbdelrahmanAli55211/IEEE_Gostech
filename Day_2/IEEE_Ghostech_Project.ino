#define led_1 2
#define led_2 5
#define led_3 7
void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);

  Serial.begin(9600);
}

void loop() {
if (Serial.available() > 0){
  String name = Serial.readStringUntil('\n');
  name.trim();

  if (name == "one"){
  digitalWrite(led_1,HIGH);
  digitalWrite(led_2,LOW);
  digitalWrite(led_3,LOW);
}
else if (name == "two"){
  digitalWrite(led_1,LOW);
  digitalWrite(led_2,HIGH);
  digitalWrite(led_3,LOW);
}
else if (name == "three"){
  digitalWrite(led_1,LOW);
  digitalWrite(led_2,LOW);
  digitalWrite(led_3,HIGH);
}
else {
  digitalWrite(led_1,LOW);
  digitalWrite(led_2,LOW);
  digitalWrite(led_3,LOW);
}
}
}
