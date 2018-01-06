int led[]={0,1,2,3,4,5,6,7};
int i;

void setup() {
  for(i=0;i<8;i++)
    pinMode(led[i],OUTPUT);
}

void loop() {
  for(i=0;i<8;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(100);
    digitalWrite(led[i],LOW);
  }
}
