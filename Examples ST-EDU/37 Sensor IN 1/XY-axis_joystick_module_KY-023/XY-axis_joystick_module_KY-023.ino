int vx=27;                    // declaring and initizating x-axis pin to analog pin A0
int vy=25;                     // declaring and initizating y-axis pin to analog pin A1
int switch_pin=32;              // declaring and initizating switch pin to analog pin pin 8
void setup() {
 Serial.begin(115200);           // setting baud rate to 115200
pinMode(vx,INPUT);               // setting x-axis pin as input
pinMode(vy,INPUT);               // setting y-axis pin as input
pinMode(switch_pin,INPUT);       // setting switch pin as input
}
void loop() {
 int x_value = analogRead(vx);    // reading value of x-axis
 int y_value = analogRead(vy);    // reading value of y-axis
 int switch_value = digitalRead(switch_pin);  // reading value of switch pin
Serial.print("x-axis:");          
Serial.print(x_value);            // printing value of x-axis
Serial.print(" | ");
Serial.print("y-axis:");          // printing value of y-axis
Serial.print(y_value);
Serial.print(" | ");
Serial.print("Switch:");
Serial.print(switch_value);       // printing value of switch
Serial.println(" | ");
delay(350);
}
