
String value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  value +=c;
  
}
if(value.length()>0){
  Serial.println(value);
}
if(value=="on1")
{
  digitalWrite(7,LOW);
}
if(value=="off1"){
  digitalWrite(7,HIGH);
 
}
if(value=="on2")
{
  digitalWrite(8,HIGH);
}
if(value=="off2"){
  digitalWrite(8,LOW);
}
if(value=="on3")
{
  digitalWrite(12,LOW);
}
if(value=="off3"){
  digitalWrite(12,HIGH);
}
if(value=="on4")
{
  digitalWrite(13,LOW);
}
if(value=="off4"){
  digitalWrite(13,HIGH);
}

value="";}
