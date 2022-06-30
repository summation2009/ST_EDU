int Led = 25 ;// Declaration of the LED-output pin
int Sensor = 27; // Declaration of the sensor input pin
int val; // Temporary variable
  
void setup ()
{
  pinMode (Led, OUTPUT) ; // Initialization output pin
  pinMode (Sensor, INPUT) ; // Initialization sensor pin
  digitalWrite(Sensor, HIGH); // Activating of the internal pull-up resistor
}
  
void loop ()
{
  val = digitalRead (Sensor) ; // The current signal from the sensor will be read
  
  if (val == HIGH) // If a signal will be detected, the LED will light up.
  {
    digitalWrite (Led, LOW);
  }
  else
  {
    digitalWrite (Led, HIGH);
  }
}
