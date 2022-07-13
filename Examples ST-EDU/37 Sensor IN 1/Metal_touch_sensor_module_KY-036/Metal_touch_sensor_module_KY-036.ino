int ch1 ; // to keep channel values

void setup()

{

  pinMode(27,INPUT); // set out input pin as such 

  Serial.begin(9600); 

}

void loop()

{

  ch1 = pulseIn(27,HIGH,25000); // Read the pulse width of the channel

  Serial.print("channel data : "); // print value of

  Serial.println(ch1) ; // the channel

 

  delay(100);

 

}
