int red = 7;
int yellow = 6;
int green = 5;
int i=0;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  delay(1000);

  for(i=0;i<5;i++){
    digitalWrite(yellow,HIGH);
    delay(100);
    digitalWrite(yellow,LOW);
    delay(100);
  }

  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
}
