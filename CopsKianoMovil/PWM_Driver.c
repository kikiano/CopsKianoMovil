#include "PWM_Driver.h"

void initPWM_DirDriver(){
  pinMode(pinRuedaIzq1, OUTPUT);
  pinMode(pinRuedaIzq2, OUTPUT);
  pinMode(pinRuedaDer1, OUTPUT);
  pinMode(pinRuedaDer2, OUTPUT);
  pinMode(LUZ1, OUTPUT);
  pinMode(LUZ2, OUTPUT);
}

void DirControl(int dir){
  switch(dir){
    case OFF:
      analogWrite(pinRuedaIzq1, OFF);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, OFF);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case vel1:
      ON = 85;
      analogWrite(pinRuedaIzq1, ON);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, ON);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case vel2:
      ON = 128;
      analogWrite(pinRuedaIzq1, ON);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, ON);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case vel3:
      ON = 255;
      analogWrite(pinRuedaIzq1, ON);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, ON);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case reversa:
      ON = 85;
      analogWrite(pinRuedaIzq1, OFF);
      analogWrite(pinRuedaIzq2, ON);
      analogWrite(pinRuedaDer1, OFF);
      analogWrite(pinRuedaDer2, ON);
    break;
    case derecha:
      ON = 128;
      analogWrite(pinRuedaIzq1, ON);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, OFF);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case izquierda:
      ON = 128;
      analogWrite(pinRuedaIzq1, OFF);
      analogWrite(pinRuedaIzq2, OFF);
      analogWrite(pinRuedaDer1, ON);
      analogWrite(pinRuedaDer2, OFF);
    break;
    case L_ON:
      digitalWrite(LUZ1,HIGH);
      digitalWrite(LUZ2,HIGH);
    break;
    case L_OFF:
      digitalWrite(LUZ1,LOW);
      digitalWrite(LUZ2,LOW);
    break;
  }
}
