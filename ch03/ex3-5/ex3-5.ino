// Example 3-5. Arduino sketch for reading the FlexiForce sensor

// squeeze_serial.ino - flexiforce squeeze level to serial
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int squeezePin=A0;
int x=-1;  // 0..1023

void setup() {
  Serial.begin(9600); // bit/s
}

void loop() {
  x=analogRead(squeezePin);
  Serial.println(x);
  delay(500); // ms
}

