// Example 3-3. Arduino sketch for reading a potentiometer

// pot.ino - control LED blinking speed with potentiometer
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int potPin=A0;
int ledPin=13;
int x=0;  // 0..1023

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  x=analogRead(potPin);
  digitalWrite(ledPin, HIGH);
  delay(x/10);
  digitalWrite(ledPin, LOW);
  delay(x/10);
}

