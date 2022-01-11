int LDRpin = A1;
int LEDpin = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(LDRpin, INPUT);
pinMode(LEDpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int LDRstat = analogRead(LDRpin);
Serial.println(LDRstat);

if (LDRstat <= 5)
{
  digitalWrite(LEDpin, HIGH);
}
else
{
  digitalWrite(LEDpin, LOW);
}
}
