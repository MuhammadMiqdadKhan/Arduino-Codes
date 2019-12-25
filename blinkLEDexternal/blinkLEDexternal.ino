void setup() {
  
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(8,OUTPUT);
 
 
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(12,HIGH);
  delay(500);
   digitalWrite(12,LOW);
   delay(500);
    digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  
  digitalWrite(8,HIGH);
 delay(500); 
  digitalWrite(8,LOW);
  delay(500);
  // put your main code here, to run repeatedly:

}
