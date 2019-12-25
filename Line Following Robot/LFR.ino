//LINE FOLLOWING ROBOT
void motfwd();
void motbwd();
void motright();
void motleft();
void motstop();
void setup() {
  // put your setup code here, to run once:
//motor 1
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);  //PWM   pin
//motor 2
pinMode(5,OUTPUT);  //PWM pin
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
//IRsensor  
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);

//Intializing serial
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Reading IR sensor
int ir1 = digitalRead(2);
int ir2 = digitalRead(3);
int ir3 = digitalRead(4);
Serial.print("middle");Serial.println(ir1);delay(1000);
Serial.print("left");Serial.println(ir2);delay(1000);
Serial.print("right");Serial.println(ir3);delay(1000);

if((ir1 == LOW)&&(ir2 ==HIGH)&&(ir3 ==LOW)){
  motfwd();
}
else if((ir1 == LOW)&&(ir2 ==LOW)&&(ir3 ==HIGH)){
  motright();}

else if((ir1 == HIGH)&&(ir2 ==LOW)&&(ir3 ==LOW)){
  motleft();
}
}

void motfwd(){
  //MOTOR 1
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  analogWrite(10,218);
  
  //MOTOR 2
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  analogWrite(5,255); 
}
void motright(){
  //MOTOR 1
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  analogWrite(10,218);
  
  //MOTOR 2
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
   
}
void motleft(){
  //MOTOR 1
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  
  //MOTOR 2
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  analogWrite(5,255);
}

void motstop(){
  //MOTOR 1
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  
  //MOTOR 2
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

