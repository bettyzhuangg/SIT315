int led = 2;
int motion = 3;

void setup()
{
  pinMode(motion, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(motion);
  Serial.println(val);
  if (val == HIGH) {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
  delay(10);
}
