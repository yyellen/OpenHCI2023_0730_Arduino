int val;

void setup(){
  pinMode(5, OUTPUT);
}


void loop(){
  val = (map(analogRead(0),0,1023,0,255));
  analogWrite(5, val);
}
