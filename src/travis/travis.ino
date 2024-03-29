/*

*/
int pin = 0;
const int delayPeriod = 30;

void setup() {

}

void loop() {
  for (int pin = 4; pin < 14; pin++)
  {
    pinMode(pin, OUTPUT); // declare pinMode once in the loop, here.
    digitalWrite(pin, HIGH);
    delay(delayPeriod);
    digitalWrite(pin, LOW);
    delay(delayPeriod);
  }
  for (int pin = 13; pin >  5; pin--) // 13 and 5 used here so that
    // the outer LEDs are not double-flashed unnecessarily
  {
    digitalWrite(pin, HIGH);
    delay(delayPeriod);
    digitalWrite(pin, LOW);
    delay(delayPeriod);
  }
}
