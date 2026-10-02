int redLED = 2; 
int yellowLED = 3; 
int greenLED = 4;
void setup() {
  pinMode(redLED, OUTPUT); 
  pinMode(yellowLED, OUTPUT); 
  pinMode(greenLED, OUTPUT);
}

void loop() {
// Red ON 
digitalWrite(redLED, HIGH); 
delay(5000); digitalWrite(redLED, LOW); 
// Yellow ON 
digitalWrite(yellowLED, HIGH); 
delay(2000); digitalWrite(yellowLED, LOW); 
// Green ON 
digitalWrite(greenLED, HIGH); 
delay(8000); 
digitalWrite(greenLED, LOW); 

}
  
  
  


  
