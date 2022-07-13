int RGB1 = 27; 
int RGB2 = 25; 
int RGB3 = 32; 
void setup()
{
pinMode(RGB1, OUTPUT);
digitalWrite(RGB1, HIGH);
pinMode(RGB2, OUTPUT);
digitalWrite(RGB2, HIGH);
pinMode(RGB3, OUTPUT);
digitalWrite(RGB3, HIGH);
}
void loop()
{
digitalWrite(RGB1, LOW); 
delay(100); 
digitalWrite(RGB1, HIGH); 
delay(100); 
digitalWrite(RGB2, LOW); 
delay(100); 
digitalWrite(RGB2, HIGH); 
delay(100); 
digitalWrite(RGB3, LOW); 
delay(100); 
digitalWrite(RGB3, HIGH); 
delay(100); 
}
