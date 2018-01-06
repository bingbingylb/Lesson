void setup() {
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  if(digitalRead(3)==0)
    digitalWrite(4,1);
  else
    digitalWrite(4,0);
}
