int xyz = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(xyz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(xyz,HIGH);
  delay(1500);
  digitalWrite(xyz,LOW);
  delay(1000);
}
