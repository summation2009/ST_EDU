 /* Author: Danny van den Brande, Arduinosensors.nl
 This is a example on how to use the KY-040 Rotary encoder. 
 Its very basic but if your new to arduino or could not find 
 any code, then you have something to start with.
 because there is little documentation about the KY sensor kit.
 */
 int CLK = 13;  // Pin 9 to clk on encoder
 int DT = 10;  // Pin 8 to DT on encoder
 int RedLed = 27;// You do not need to use the leds. 
                // you can take a look in the serial monitor if you dont have leds.
                // there it will display values. 
 int GreenLed = 25;
 int RotPosition = 0; 
 int rotation;  
 int value;
 boolean LeftRight;
 void setup() { 
   Serial.begin (9600);
   pinMode (CLK,INPUT);
   pinMode (DT,INPUT);
   pinMode (RedLed, OUTPUT);
   pinMode (GreenLed, OUTPUT);
   rotation = digitalRead(CLK);   
 } 
 void loop() { 
   value = digitalRead(CLK);
     if (value != rotation){ // we use the DT pin to find out which way we turning.
     if (digitalRead(DT) != value) {  // Clockwise
       RotPosition ++;
       LeftRight = true;
     } else { //Counterclockwise
       LeftRight = false;
       RotPosition--;
     }
     if (LeftRight){ // turning right will turn on red led.
       Serial.println ("clockwise");
       digitalWrite (RedLed, HIGH);
       digitalWrite (GreenLed, LOW);
     }else{        // turning left will turn on green led.   
       Serial.println("counterclockwise");
       digitalWrite (RedLed, LOW);
       digitalWrite (GreenLed, HIGH);
     }
     Serial.print("Encoder RotPosition: ");
     Serial.println(RotPosition);
     // this will print in the serial monitor.
     
   } 
   rotation = value;
 } 
