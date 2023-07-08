int val;

void setup(){
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}


void loop(){
  val = analogRead(2);
  Serial.println(val);
  // TODO
  /*
  if(){

    delay(100);
  }
  else{

  }
  */
}
