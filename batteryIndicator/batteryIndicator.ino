
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(0);
  float volts = val * (5.0 / 1023.0);
  Serial.println(volts);
  delay(3000);
}
