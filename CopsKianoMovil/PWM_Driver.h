#include<arduino.h>

#define pinRuedaIzq1 2
#define pinRuedaIzq2 3
#define pinRuedaDer1 4
#define pinRuedaDer2 5
#define LUZ1         8
#define LUZ2         9

#define OFF 0

int ON;
enum{
  vel1 = 1,
  vel2,
  vel3,
  reversa,
  izquierda,
  derecha,
  L_ON,
  L_OFF
};

void initPWM_DirDriver();
void DirControl(int dir);
void lightsControl(int Switch);
