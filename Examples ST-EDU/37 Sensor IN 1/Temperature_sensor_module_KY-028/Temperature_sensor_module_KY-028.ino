int led = 13; // define the LED pin
int digitalPin = 27; // KY-028 digital interface
int analogPin = 34; // KY-028 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if temperature threshold reached
  {
    digitalWrite(led, HIGH); // turn ON Arduino's LED
  }
  else
  {
    digitalWrite(led, LOW); // turn OFF Arduino's LED
  }
  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial
  delay(100);
}
