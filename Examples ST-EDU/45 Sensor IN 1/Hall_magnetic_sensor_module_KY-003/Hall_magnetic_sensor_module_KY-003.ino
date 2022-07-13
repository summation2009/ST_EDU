int Led = 27 ;// define LED Interface
int buttonpin = 25; // define the Reed sensor interfaces
int val;// define numeric variables val
void setup()
{
pinMode(Led, OUTPUT);// define LED as output interface
pinMode(buttonpin, INPUT);// output interface as defined Reed sensor
}
void loop()
{
val = digitalRead(buttonpin) ;// digital interface will be assigned a value of 3 to read val
if(val == LOW) // When the Reed sensor detects a signal, LED flashes
{
digitalWrite(Led, HIGH);
}
else
{
digitalWrite(Led, LOW);
}
}

// ใช้-------(แม่เหล็ก)-------ในการ สั่งเปิด-ปิด ตัวเซนเซอร์
