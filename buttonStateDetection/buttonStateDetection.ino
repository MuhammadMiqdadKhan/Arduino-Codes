void setup() {
  // put your setup code here, to run once:
pinMode(11,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int state = digitalRead(11);
if(state==HIGH){
  Serial.println("");
}
}
