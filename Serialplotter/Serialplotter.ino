void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int temp = random(0,100);
int humidity = random(100,200);
int pressure=random(200,300);

Serial.print(temp);
Serial.print(" ");
Serial.print(humidity);
Serial.print(" ");
Serial.println(pressure);
}
