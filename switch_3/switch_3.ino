int n=0;
void setup() {
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  if(digitalRead(3)==0)
    n++;
  switch(n){
    case 0:
      digitalWrite(4,0);
      break;
    case 1:
      digitalWrite(4,1);
      break;
    default:
      n=0;
  }
}
