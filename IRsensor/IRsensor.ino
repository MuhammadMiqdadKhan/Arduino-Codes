void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
Serial.begin(9600);
}

void loop() {
  int value = digitalRead(8);
  Serial.println(value);
  // put your main code here, to run repeatedly:

}
