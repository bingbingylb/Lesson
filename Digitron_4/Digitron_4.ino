byte num[10]={0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
int digitron[8]={2,3,4,5,6,7,8,9};
int dtbit[4]={10,11,12,13};

void DTprint(byte num)  {
  int i;
  for(i=0;i<8;i++){
    digitalWrite(digitron[7-i],num%2);
    num/=2;
  }
}

void DTbit(int bit){
  int i;
  for(i=0;i<4;i++){
    if(i==bit)
      digitalWrite(dtbit[i],0);
    else
      digitalWrite(dtbit[i],1);
  }
}

void setup() {
  int i;
  for(i=2;i<13;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  int i=0,j,k,n;
  for(i=1000;i<10000;i++){
    for(j=0;j<5;j++){
      n=i;
      for(k=0;k<4;k++){
        DTprint(num[n%10]);
        DTbit(3-k);
        delay(5);
        n/=10;
      }
    }
  }
}
