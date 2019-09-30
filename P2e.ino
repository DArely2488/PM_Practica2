void setup() { 
 // put your setup code here, to run once:
DDRC= B11111111;
PORTC=B00000000;
Serial.begin(9600); 
// 36 AMARILLO 1 35 VERDE 2 
}

void loop() {
  // put your main code here, to run repeatedly: 
 asm("nop\n"); 
 
delay(500); 
PORTC=33;  
delay(5000); 
 PORTC=34;  
delay(1000); 
 PORTC=12;
delay(5000); 
 PORTC=20;
delay(1000); 
  
}
