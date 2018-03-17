int digitron[8]={2,3,4,5,6,7,8,9};

void DTprint(byte num)  {
  int i;
  for(i=0;i<8;i++){
    digitalWrite(digitron[7-i],num%2);
    num/=2;
  }
}

void setup() {
  int i;
  for(i=2;i<10;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  byte r=0x80,p=0x00;
  int i,j;
  for(i=0;i<9;i++){
    DTprint(p);
    p+=r;
    r>>1;
    delay(500);
  }
}
