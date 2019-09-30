const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
  cli();
  DDRD &= ~(1 << DDD1);
  PORTD |= (1 << PORTD1);
  EICRA |= (1 << ISC10);
  EIMSK |= (1 << INT1);
  sei();//set global interrupt enable
}
 
void loop() {
digitalWrite(ledPin, state);
}
 
void blink() {
state = !state;
}
