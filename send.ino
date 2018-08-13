int B = 3;
int D = 5;
int p;
int x, y;
boolean state = false;
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
}
void loop()
{
  x = analogRead(A0)-499;
  y = analogRead(A1)-512;
  if (digitalRead(B)== state)
    p = 1;
  else if (digitalRead(D) == state)
    p = -1;
  else
    p = 0;
    Serial.print("X:");
    Serial.print(x);
    Serial.print("Y:");
    Serial.print(y);
    Serial.print("P:");
    Serial.println(p);
    Serial1.print("x:");  
    Serial1.print(x);
    Serial1.print("Y:");
    Serial1.print(y);
    Serial1.print("P:");
    Serial1.println(p);
    delay(50);
  }




