// Arduino and KY-029 module

void setup() {
pinMode(27, OUTPUT); // module's red pin
pinMode(25, OUTPUT); // module's green pin

digitalWrite(27, LOW); // switch off red
digitalWrite(25, LOW); // switch off green
}


void loop() {
digitalWrite(25, HIGH); // switch on red
delay(1000); // wait 1 second
digitalWrite(25, LOW); // switch off red

digitalWrite(27, HIGH); // switch on green
delay(1000); // wait 1 second
digitalWrite(27, LOW); // switch off green
}
