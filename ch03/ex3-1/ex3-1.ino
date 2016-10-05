// Example 3-1. Arduino sketch for detecting a button press

// button.ino - light an LED by pressing button
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int buttonPin=2;
int ledPin=13;
int buttonStatus=LOW;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);  // internal pull-up
}

void loop()
{
  buttonStatus=digitalRead(buttonPin);
  if (LOW==buttonStatus) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

