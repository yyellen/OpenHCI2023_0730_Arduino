void setup(){
  pinMode(4, OUTPUT);
  pinMode(6, INPUT);
}


void loop(){
  if((digitalRead(6)) == HIGH){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
}
