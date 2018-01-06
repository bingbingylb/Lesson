byte num[10]={0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
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
  for(i=2;i<13;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  int i,j;
  for(i=0;i<10;i++){
    DTprint(num[i]);
    delay(1000);
  }
}
