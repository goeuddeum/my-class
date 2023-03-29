int Led1 = 8;
int Led2 = 9;
int Led3 = 10;

void style_1(void)
{
  unsigned char j;
  for(j=1;j<=3;j++)
    digitalWrite(j,HIGH);
    delay(200);

  for(j=3;j>=1;j--)
  {
    digitalWrite(j,LOW);
    delay(200);
  } 
}
void setup()
{ 
  unsigned char i;
  for(i=1;i<=3;i++)
    pinMode(i,OUTPUT);
}
void loop()
{   
  style_1();
  
}