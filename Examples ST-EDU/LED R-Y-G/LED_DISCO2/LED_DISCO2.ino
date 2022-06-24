//Example Code EP 2: LED Disco2
// Summation Technology 

#define led1 27
#define led2 25
#define led3 32

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);
}

#define DELAY 50
void loop() {
  //led_blynk();
led_circle(led1, DELAY);
led_circle(led2, DELAY);
led_circle(led3, DELAY);
}

void led_blynk() {
  digitalWrite(led1, LOW);
  delay(DELAY);
  digitalWrite(led2, LOW);
  delay(DELAY);
  digitalWrite(led3, LOW);
  delay(DELAY);
  digitalWrite(led3, HIGH);
  delay(DELAY);
  digitalWrite(led2, HIGH);
  delay(DELAY);
  digitalWrite(led1, HIGH);
  delay(DELAY);
}

int led_circle(int pin, int Delay){
  digitalWrite(pin, LOW);
  delay(Delay);
  digitalWrite(pin, HIGH);
  delay(Delay);
  }
