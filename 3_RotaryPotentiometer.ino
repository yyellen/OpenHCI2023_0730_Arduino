int val;

void setup(){
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}


void loop(){
  val = analogRead(0);
  digitalWrite(4, HIGH);
  delay(val);
  digitalWrite(4, LOW);
  delay(val);
  Serial.println(val);
}
