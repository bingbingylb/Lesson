int n=0,flag_1=1,flag_2=1;

void setup() {
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  if(digitalRead(3)==0)
    flag_1=0;
  else
    flag_1=1;
  if(digitalRead(3)==0&&flag_1==0&&flag_2==1)
    n++;
  flag_2=flag_1;

  if(n==0)
    digitalWrite(4,0);
  if(n==1)
    digitalWrite(4,1);
  if(n==2)
    n=0;
}
