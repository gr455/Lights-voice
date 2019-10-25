int out_pin = 10;
void setup() {
    pinMode(out_pin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  while(Serial.available()<0); // Won't go further if Serial input is not available. Saves processing power
  
   char serdat=Serial.read();
    
    if(serdat=='1'){
      digitalWrite(out_pin,HIGH);
    }
    
    else if(serdat=='0'){
      digitalWrite(out_pin,LOW);
    }
  

}
