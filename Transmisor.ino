#include <SPI.h>
#include <RF24.h>
  RF24 radio(7, 8); // CE, CSN
  const byte identificacion[6] = "00001";
  int Puls1 = 2;
  int Puls2 = 3;
  int Puls3 = 4;
  int Puls4 = 5;
  int Puls5 = 6;
  int Puls6 = 9;
  int Puls7 = 10;
  int Puls8 = 11;
  int Puls9 = 12;
  int Puls10 = 13;
  
void setup() {
  pinMode(Puls1,INPUT_PULLUP); // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls2,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls3,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls4,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls5,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls6,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls7,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls8,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls9,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  pinMode(Puls10,INPUT_PULLUP);  // se define la entrada con un resistor a 5V (pullup)
  Serial.begin(9600); // Iniciamos la comunicacion serie hacia el Monitor Serie en la PC
  radio.begin();
  radio.openWritingPipe(identificacion);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  char caracter = ""; 
  if (digitalRead(Puls1) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls1) == 0) {
      caracter = "a";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls2) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls2) == 0) {
      caracter = "b";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls3) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls3) == 0) {
      caracter = "c";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls4) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls4) == 0) {
      caracter = "d";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls5) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls5) == 0) {
      caracter = "e";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls6) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls6) == 0) {
      caracter = "f";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls7) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls7) == 0) {
      caracter = "g";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls8) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls8) == 0) {
      caracter = "h";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls9) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls9) == 0) {
      caracter = "i";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  else
  if (digitalRead(Puls10) == 0) {
    delay(10); // filtro de rebote mecanico
    if (digitalRead(Puls10) == 0) {
      caracter = "j";
      radio.write(&caracter, 1);
      while (digitalRead(Puls1) == 0) { } // espera a que se suelte el pulsador
    }
  }
  delay(500);
}