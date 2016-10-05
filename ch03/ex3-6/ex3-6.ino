// Example 3-6. The LM35 Arduino circuit

// temperature_lm35.ino - LM35 temperature in Celsius to serial
// (c) BotBook.com - Karvinen, Karvinen, Valtokari

int lmPin = A0;

void setup()
{
  Serial.begin(9600);
}

float tempC()
{
  float raw = analogRead(lmPin);
  float percent = raw/1023.0;
  float volts = percent*5.0;
  return 100.0*volts;
}

void loop()
{
  Serial.println(tempC());
  delay(200); // ms
}


