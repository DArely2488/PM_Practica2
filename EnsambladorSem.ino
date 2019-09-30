int cont=0;
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
   if (cont <=15){
    PORTC=cont;  
    delay(250); 
    cont++;}
    else{
      cont=0;
      }

  }
