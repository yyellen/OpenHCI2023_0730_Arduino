void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  if(val < 500){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
  delay(10);
}
