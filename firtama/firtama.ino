int led = 13;
void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
}
