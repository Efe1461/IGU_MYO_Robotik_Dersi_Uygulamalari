/*
  İGÜ MYO Robotik 1. Led Yak ve Söndür Uygulaması
  
  Github adresi yaz.
*/

int led_pin = 13;

void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(led_pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led_pin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
