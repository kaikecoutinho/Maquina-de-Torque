String readString;
   
void setup() {
  Serial.begin(9600);
  //Serial.println("serial test 0021"); 
  pinMode(13, OUTPUT); 
}

void loop() {

  while (Serial.available()) {
    delay(2);  //delay to allow byte to arrive in input buffer
    char c = Serial.read();
    readString += c;
    
  }

  if (readString.length() >0) {
    Serial.println(readString.toInt());
    if(readString.toInt()>20)
      digitalWrite(13, HIGH);
    else
      digitalWrite(13, LOW);
    readString="";
    
  } 
}
