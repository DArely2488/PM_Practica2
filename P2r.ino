int flag=LOW;
int counter=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  DDRB = DDRB | B11111111;//pin 13 habilitado
  DDRH = DDRH | B00111111;//pin 6 y 7 habilitao como salias
  cli();
  TCCR1B= 0; TCCR1A=0;
  TCCR1B |= B00001101; // pin 8,9,10. Configurados como salida
  OCR1A= 0x3D09;
  TIMSK1 |= (1 << OCIE1A);
  sei();
}



ISR(TIMER1_COMPA_vect){
  Serial.println("ISR triggered");
  Serial.println(counter);
  
  if(counter==0){
    digitalWrite(13, HIGH); //verde
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }else if(counter==12){
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }else if(counter== 15){
    digitalWrite(8, LOW);     
    digitalWrite(12, LOW); 
    digitalWrite(9, HIGH); 
    digitalWrite(13, LOW); //verde
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }else if(counter==24){
    counter=-1;
  }
counter= counter+1;
}
void loop() {
  // put your main code here, to run repeatedly:

}
