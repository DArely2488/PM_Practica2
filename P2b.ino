//*Pin de salida del led
const int ledPinA = 13;
const int ledPinV1 = 12;
const int ledPinR = 11;
const int ledPinV2= 10;
int states =HIGH;
int var=0;
volatile byte state = LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinV1, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinV2, OUTPUT);
  //attachInterrupt(digitalPinToInterrupt(botPin), encendido, RISING);
}

void loop() {
int cont=0;
int IdStatusA = analogRead(ledPinA);
int IdStatusV1 = analogRead(ledPinV1);
int IdStatusR = analogRead(ledPinR);
int IdStatusV2 = analogRead(ledPinV2);


Serial.println(IdStatusA);
  delay(250);
  //PIN AMARILLO CADA 2 SEGUNDOS
  digitalWrite(ledPinA, HIGH);
  //PIN VERDDE 1 CADA 1 SEGUNDO
    digitalWrite(ledPinV2, HIGH);
      //PIN ROJO CADA MEDIO SEGUNDI
      digitalWrite(ledPinR, HIGH);
        //pin verde dos cada .25 segundos
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250); 
      digitalWrite(ledPinR, LOW);
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250); 
    digitalWrite(ledPinV2, LOW);
    digitalWrite(ledPinR, HIGH);
        //pin verde dos cada .25 segundos
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250); 
      digitalWrite(ledPinR, LOW); 
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250);
  digitalWrite(ledPinA, LOW);
       digitalWrite(ledPinV2, HIGH);
      //PIN ROJO CADA MEDIO SEGUNDI
      digitalWrite(ledPinR, HIGH);
        //pin verde dos cada .25 segundos
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
      digitalWrite(ledPinR, LOW); 
        delay(250); 
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);         
    digitalWrite(ledPinV2, LOW);
    digitalWrite(ledPinR, HIGH);
        delay(250);
        //pin verde dos cada .25 segundos
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250); 
      digitalWrite(ledPinR, LOW); 
        digitalWrite(ledPinV1, HIGH);
         delay(250);
        digitalWrite(ledPinV1, LOW);
         delay(250);

}
