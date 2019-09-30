void setup()
{
DDRB = DDRB | B00100011; // Data Direction Register B: Inputs 0-4, 6-7, Output 5
//Outoput 1, Input 0
}

void loop() {
  // put your main code here, to run repeatedly:
  asm volatile (
    "sbi %0, %1 \n" //low
    : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB7):
  );
    
  delay(500);
  asm volatile (
  "cbi %0, %1 \n"  //high
    : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB7):
  );
    delay(500);
 }
