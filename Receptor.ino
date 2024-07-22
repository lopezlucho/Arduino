#include <SPI.h>
#include <RF24.h>
#define encender LOW // definicion de valores para accionar reles
#define apagar HIGH
int rele1 = 2; // definicion de nombres de salidas
int rele2 = 3;
int rele3 = 4;
int rele4 = 5;
int rele5 = 6;
int rele6 = 9;
int rele7 = 10;
int rele8 = 11;
int rele9 = 12;
int rele10 = 13;

RF24 radio(7,8); // CE, CSN
const byte identificacion[6] = "00001"; // cualquier juego de 5 letras y numeros

void setup() {
  pinMode(rele1,OUTPUT); 
  digitalWrite(rele1,apagar); // Rele 1
  pinMode(rele2,OUTPUT);
  digitalWrite(rele2,apagar); // Rele 2
  pinMode(rele3,OUTPUT); 
  digitalWrite(rele3,apagar); // Rele 3
  pinMode(rele4,OUTPUT);
  digitalWrite(rele4,apagar); // Rele 4
  pinMode(rele5,OUTPUT); 
  digitalWrite(rele5,apagar); // Rele 5
  pinMode(rele6,OUTPUT);
  digitalWrite(rele6,apagar); // Rele 6
  pinMode(rele7,OUTPUT); 
  digitalWrite(rele7,apagar); // Rele 7
  pinMode(rele8,OUTPUT);
  digitalWrite(rele8,apagar); // Rele 8
  pinMode(rele9,OUTPUT); 
  digitalWrite(rele9,apagar); // Rele 9
  pinMode(rele10,OUTPUT);
  digitalWrite(rele10,apagar); // Rele 10
  radio.begin();
  radio.openReadingPipe(0, identificacion);
  radio.setPALevel(RF24_PA_MIN);
  // Opciones RF24_PA_MIN, RF24_PA_LOW, RF24_PA_HIGH, RF24_PA_MAX
  // MIN = -18dBm, LOW = -12dBm, HIGH = -6dBm, MAX = 0dBm
  radio.startListening(); // inicio de recepcion
}
void loop() {
/**************************************************************/
  if (radio.available()) {
  char texto[2]; 
  radio.read(&texto,1); // Esperamos que llegue algo por RF desde el modulo
  if (sizeof(texto)>0) {
/**************************************************************/
  controlEncendido(texto[0]);
  }
 }
}

// rutina auxiliar
void controlEncendido(char val) {
int valor = 0;
switch (val) {
  case 'a':
    valor = !digitalRead(rele1);
    digitalWrite(rele1,valor); 
    // RELE 1 apagado 
    break;
  case 'b':
    valor = !digitalRead(rele2);
    digitalWrite(rele2,valor); 
    // RELE 2 apagado 
    break;
  case 'c':
    valor = !digitalRead(rele3);
    digitalWrite(rele3,valor); 
    // RELE 3 apagado 
    break;
  case 'd':
    valor = !digitalRead(rele4);
    digitalWrite(rele4,valor); 
    // RELE 4 apagado 
    break;
  case 'e':
    valor = !digitalRead(rele5);
    digitalWrite(rele5,valor); 
    // RELE 5 apagado 
    break;
  case 'f':
    valor = !digitalRead(rele6);
    digitalWrite(rele6,valor); 
    // RELE 6 apagado 
    break;
  case 'g':
    valor = !digitalRead(rele7);
    digitalWrite(rele7,valor); 
    // RELE 7 apagado 
    break;
  case 'h':
    valor = !digitalRead(rele8);
    digitalWrite(rele8,valor); 
    // RELE 8 apagado 
    break;
  case 'i':
    valor = !digitalRead(rele9);
    digitalWrite(rele9,valor); 
    // RELE 9 apagado 
    break;
  case 'j':
    valor = !digitalRead(rele10);
    digitalWrite(rele10,valor); 
    // RELE 10 apagado 
    break;
  default:
    break;
  }
}








