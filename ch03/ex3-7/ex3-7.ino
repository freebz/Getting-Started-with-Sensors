// Example 3-7. The HC-SR04 Arduino sketch

// hc-sr04.ino - distance using ultrasonic ping sensor
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int trigPin = 8;
int echoPin = 7;
float v=331.5+0.6*20; // m/s

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

float distanceCm(){
  // send sound pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  // listen for echo
  float tUs = pulseIn(echoPin, HIGH); // microseconds
  float t = tUs / 1000.0 / 1000.0 / 2.0;  // s
  float d = t*v;  // m
  return d*100; // cm
}

void loop()
{
  int d=distanceCm();
  Serial.println(d, DEC);
  delay(20);  // ms
}


