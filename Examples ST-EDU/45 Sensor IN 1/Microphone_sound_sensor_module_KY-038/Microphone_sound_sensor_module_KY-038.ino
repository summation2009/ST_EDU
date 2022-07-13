#define DO 27
#define LED_pin 25

unsigned long last_event = 0;
boolean LED_state = false;   

void setup() {
  pinMode(LED_pin, OUTPUT);  
  pinMode(DO, INPUT);  
}

void loop() {
  int output = digitalRead(DO);
  if (output == LOW) {
  if (millis() - last_event > 25) {
    LED_state = !LED_state;
    digitalWrite(LED_pin, LED_state ? HIGH : LOW);
  }
  last_event = millis();
  }
}
