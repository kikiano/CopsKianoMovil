#include "Bluetooth_Driver.h"

SoftwareSerial tmserial (BT_RX, BT_TX);
int Data;

void InitBluetooth_Driver() {
  // put your setup code here, to run once:
  tmserial.begin(9600);
  tmserial.print("Coneccion exitosa");
  tmserial.println();
}

int checkData() {
  // put your main code here, to run repeatedly:
  if(tmserial.available()){
    Data = tmserial.read();
    return Data;
  }
  
}
