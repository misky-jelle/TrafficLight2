// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(1,OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}