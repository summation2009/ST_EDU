int led_pin = 27; // Define the LED interface
int switch_pin = 25; // Definition of mercury tilt switch sensor interface
int val; // Defines a numeric variable
void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
}
void loop()
{
  val = digitalRead(switch_pin); // check mercury switch state
  if(val == LOW)
  {
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }
}
