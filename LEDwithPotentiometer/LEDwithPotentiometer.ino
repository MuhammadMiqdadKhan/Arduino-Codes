void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(A0);
int x=value/4;
Serial.println(value);
analogWrite(11,x);
}
