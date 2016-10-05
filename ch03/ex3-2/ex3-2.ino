// Example 3-2. Infrared distance switch Arduino sketch

// infrared_proximity.ino - light LED when object near, using Dagu IR switch
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int irPin=8;
int ledPin=13;
int objectDetected=LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(irPin, INPUT);
  digitalWrite(irPin, HIGH);  // internal pull-up
}

void loop() {
  objectDetected=digitalRead(irPin);
  if (LOW==objectDetected) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

