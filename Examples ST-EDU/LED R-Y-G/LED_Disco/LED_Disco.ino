//Example Code EP 1: LED Disco
// Summation Technology 
#define LED1 27
#define LED2 25
#define LED3 32
void setup() 
{
  Serial.begin(9600);
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
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
 
  digitalWrite(LED3, HIGH);
  delay(500);
  digitalWrite(LED3, LOW);
  delay(500);
}
