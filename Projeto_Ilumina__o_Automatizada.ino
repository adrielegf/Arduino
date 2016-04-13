//Sensor de luz
 
int ledPin = 7; //Led no pino 7
int ldrPin = 0; //LDR no pino analígico 0
int ldrValor = 0; //Valor lido do LDR
 
void setup() {
 pinMode(ledPin,OUTPUT); 
 Serial.begin(9600); 
}
 
void loop() {
 
 ldrValor = analogRead(ldrPin);
 
 
 if (ldrValor>= 400) digitalWrite(ledPin,HIGH);

 else digitalWrite(ledPin,LOW);
 
 
 Serial.println(ldrValor);
 delay(100);
}
