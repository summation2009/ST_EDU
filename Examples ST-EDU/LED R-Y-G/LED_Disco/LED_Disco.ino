//Example Code EP 1: LED Disco
// Summation Technology 
#define LED1 15
#define LED2 13

void setup() 
{
  Serial.begin(9600);
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);

}
 
void loop() 
{
  Serial.print("TOP");
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
 
  digitalWrite(LED2, HIGH);
  delay(500);
  digitalWrite(LED2, LOW);
  delay(500);

}
