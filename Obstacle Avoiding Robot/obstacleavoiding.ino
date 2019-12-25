// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>

#define TRIGGER_PIN1  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN1     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE1 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


#define TRIGGER_PIN2  5  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN2     6  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE2 200


#define TRIGGER_PIN3  2  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN3     3  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE3 200


NewPing sonar(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE1); // NewPing setup of pins and maximum distance.
NewPing sonar(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE2); 
NewPing sonar(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE3); 

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
  delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS1 = sonar.ping();// Send ping, get ping time in microseconds (uS).
   unsigned int uS2 = sonar.ping();
    unsigned int uS3 = sonar.ping();
  int distance1 = uS1 / US_ROUNDTRIP_CM;
  int distance2 = uS2 / US_ROUNDTRIP_CM;
  int distance3 = uS3 / US_ROUNDTRIP_CM;
Serial.print("distance 1: ")Serial.print(distance1);Serial.print("\t");
Serial.print("distance 2: ")Serial.print(distance2);Serial.print("\t");
Serial.print("distance 3: ")Serial.print(distance3);Serial.print("\n");

if(distance2<19){motright();}
else if(distance2>19){motfwd();}
else if(distance1<19){motleft();}
else if(distance3<19){motleft();}
else if(distance2<5){motstop();}
}
