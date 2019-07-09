int micPin = A0;     
int gndPin = A1;
int powerPin = A2;
int micValue1 = 0;  
int micValue2 = 0; 


void setup() {
    Serial.begin(9600); 
  pinMode(powerPin, OUTPUT);
  pinMode(gndPin, OUTPUT);
  pinMode(micPin, INPUT);
  digitalWrite(gndPin,LOW);
  delay(500);
  digitalWrite(powerPin,HIGH);
  Serial.begin(9600);  
}

void loop() {
  micValue1 = analogRead(micPin);  
  delay(10);
  micValue2 = analogRead(micPin);
  
  if (micValue2-micValue1 > 2){
     Serial.println(micValue2-micValue1);
  delay(1000);
  }
  
} 

























