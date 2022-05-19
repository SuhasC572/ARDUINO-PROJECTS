//C++
//
//Made by - Suhas C


long blinkRate = 1000; 
 
void setup() {
  pinMode(13,OUTPUT); 
  Serial.begin(9600);   
  Serial.println("Enter the blink delay length");
}

void loop() {
  
  if (Serial.available() > 0){
    blinkRate = Serial.parseInt();
    Serial.println(blinkRate);
  }
    
    digitalWrite(13,HIGH);
    delay(blinkRate);
    digitalWrite(13,LOW);
    delay(blinkRate);   
 }

