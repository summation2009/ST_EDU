int sensorPin = 34;
void setup() {
   Serial.begin(9600);
   analogReadResolution(10);
}
void loop ()
{
   while(1)
   {
     Serial.print(analogRead(sensorPin));
     delay(2000);
     Serial.print('\n');
   }
} 
