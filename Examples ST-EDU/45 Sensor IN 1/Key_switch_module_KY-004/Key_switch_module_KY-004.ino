int led = 27; //Define the LED pin
int buttonpin = 25; //Define the push button pin
int val; //Define a numeric variable
 
void setup()
{
pinMode(led,OUTPUT);
pinMode(buttonpin,INPUT);
}
 
void loop()
{
val = digitalRead(buttonpin); // check the state of the button
if(val==LOW) // if button is pressed, turn LED on
{
digitalWrite(led,HIGH);
}
else
{
digitalWrite(led,LOW);
}
}
