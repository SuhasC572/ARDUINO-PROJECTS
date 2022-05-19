// C++ code
//
// Made By- Suhas C

void setup(){
  pinMode(13,OUTPUT);
  pinMode(A5,INPUT);
  Serial.begin(5000);
}

void loop(){
  int value = analogRead(A5);
  digitalWrite(13, HIGH);
  delay(value);
  digitalWrite(13, LOW);
  delay(value);
  Serial.println(value);
}
  
  
