void motfwd();


void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT); //PWM pin
pinMode(9,OUTPUT); //PWM pin
pinMode(10,OUTPUT);

pinMode(5,OUTPUT); //PWM pin
pinMode(6,OUTPUT); //PWM pin
pinMode(7,OUTPUT);//PWM pin
}

void loop() {
  // put your main code here, to run repeatedly:
motfwd();

}
void motfwd(){
  digitalWrite(8,HIGH);
digitalWrite(9,LOW);
analogWrite(10,215);


  digitalWrite(6,HIGH);
digitalWrite(7,LOW);
analogWrite(5,255);
}


