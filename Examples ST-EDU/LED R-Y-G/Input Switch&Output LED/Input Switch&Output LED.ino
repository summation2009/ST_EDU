//Example Code EP 3: Input Switch&Output LED
// Summation Technology

#define led1  27
#define led2  25


#define buttonPin1 35
#define buttonPin2 33

int buttonState1 = 0;
int buttonState2 = 0;
void setup()
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

}
void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == LOW) {
    digitalWrite(led1, LOW);
  }
  else {
    digitalWrite(led1, HIGH);
  }

   buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == LOW) {
    digitalWrite(led2, LOW);
  }
  else {
    digitalWrite(led2, HIGH);
  }
}
