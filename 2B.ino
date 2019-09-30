void setup() {
   // inicializa como salida digital el pin 13.
  pinMode(13, OUTPUT);
  
}

void loop() {
  digitalWrite(13, HIGH);   // Enciende el LED 
  asm_delay(250);           // función de retardo con ensamblador 
  digitalWrite(13, LOW);   // Apaga el LED 
  asm_delay(250);
  
}
/*------------------------------
retardo usando instrucciones en ensamblador (assambly)
*/
void asm_delay(uint8_t ms)
{
uint16_t cnt;      // variable cnt,tipo de datos de 2 bytes sin signo
asm volatile (
delay_count = 4000000/4000;

"\n"
"L_dl1%=:" "\n\t"
"mov %A0, %A2" "\n\t"
"mov %B0, %B2" "\n"
"L_dl2%=:" "\n\t"
"sbiw %A0, 1" "\n\t"
"brne L_dl2%=" "\n\t"
"dec %1" "\n\t"
"brne L_dl1%=" "\n\t"
: "=&w" (cnt)
: "r" (ms), "r" (delay_count)
);
}
