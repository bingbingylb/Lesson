int flag=0,light=0,temp=255;
int led=6;
String text;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  text=Serial.readString();
  if(text=="start")
  {
    Serial.println("开灯");
    light=temp;
    flag=1;
    Serial.print("亮度：");
    Serial.println((light-30)/45+1);
  }
  
  if(text=="end")
  {
    Serial.println("关灯");
    temp=light;
    light=0;
    flag=0;
  }
  
  if(flag==1)
  {
    if(text=="+")
    {
      light+=45;
      if(light>255)
        light=255;
      Serial.print("亮度：");
      Serial.println((light-30)/45+1);
    }
    if(text=="-")
    {
      light-=45;
      if(light<30)
        light=30;
      Serial.print("亮度：");
      Serial.println((light-30)/45+1);
    }
  }
  analogWrite(led,light);
}
