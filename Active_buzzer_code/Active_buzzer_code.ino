int buzzPin = 3;                   //Define the number port 3
void setup(){
    pinMode(buzzPin, OUTPUT);    //Set buzzPin to output mode
}
void loop(){
    digitalWrite(buzzPin, HIGH); //The active buzzer sounds
    delay(2000);                 //delay 2S
    digitalWrite(buzzPin, LOW);  //Active buzzer off
    delay(2000);                 //delay 2S      
}
