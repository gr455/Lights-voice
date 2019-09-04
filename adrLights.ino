/*

*/

//change port number according to your configuration
void setup() {
    pinMode(10,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
   char serdat=Serial.read();
    
    if(serdat=='1'){
      digitalWrite(10,HIGH);
    }
    
    else if(serdat=='0'){
      digitalWrite(10,LOW);
    }
  }

}