const int soundpin=A2;
const int threshold=50; 
void setup() {
Serial.begin(9600);

pinMode(soundpin,INPUT);
}
void loop() {
int soundsens=analogRead(soundpin);
if (soundsens>=threshold) {
 Serial.println(soundsens);
  delay(1000);
}

else{
 Serial.println("sxala");
 delay(1000);
}
}

