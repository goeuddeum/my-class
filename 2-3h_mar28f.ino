int sw = 5; 
int LED1 = 3;
int LED2 = 6;
int LED3 = 9;
void setup() {
  pinMode(sw, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
 
void loop() {
  
  if(digitalRead(sw) == LOW) 
  {
    digitalWrite(LED1, HIGH); 
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  }
     
  else
  {
    digitalWrite(LED1, LOW); 
    digitalWrite(LED2, LOW); 
    digitalWrite(LED3, LOW);
  }
    

}