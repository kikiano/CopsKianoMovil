#include "PWM_Driver.c"
#include "HCSR04_Driver.h"
#include "Bluetooth_Driver.h"
int dir;
void setup() {
  // put your setup code here, to run once:
  initPWM_DirDriver();
  HCSR04_InitDriver();
  InitBluetooth_Driver();
}

void loop() {
  // put your main code here, to run repeatedly:
  dir = checkData();
  if(MedirDist()>=30){
      DirControl(dir);
  }else{
    if((dir == 1) || (dir==2) || (dir==3)){
        dir = OFF;
        DirControl(dir);
    }else{
      DirControl(dir);
      delay(150);
      DirControl(OFF);
      delay(150);
    }          
  }
}
