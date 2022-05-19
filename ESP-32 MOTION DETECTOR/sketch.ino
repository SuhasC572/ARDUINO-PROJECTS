int StatePir = LOW;             
int val = 0;                    

void setup() {
  pinMode(12, OUTPUT);     
  pinMode(14, INPUT);     
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(14);  
  if (val == HIGH) {            
    digitalWrite(12, HIGH);  
    if (StatePir == LOW) {
      Serial.println("Motion is Detected");
      StatePir = HIGH;
    }
  } else {
    digitalWrite(12, LOW); 
    if (StatePir == HIGH) {
      Serial.println("No motion is detected");
      StatePir = LOW;
    }
  }
}
