#include <stdio.h>
#include "pico/stdlib.h"

int contNUM =0;

bool mostrarNum(struct repeating_timer *t){
  switch(contNUM){
    case 0: mostrar0();break;
    case 1: mostrar1();break;
    case 2: mostrar2();break;
    case 3: mostrar3();break;
    case 4: mostrar4();break;
    case 5: mostrar5();break;
    case 6: mostrar6();break;
    case 7: mostrar7();break;
    case 8: mostrar8();break;
    case 9: mostrar9();contNUM=0;return true;break;

  }
  contNUM++;
  return true;
}

void mostrar0(){
    gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,false);
    gpio_put(6,false);
    gpio_put(7,true);
}
void mostrar1(){
  gpio_put(1,true);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,true);
    gpio_put(5,true);
    gpio_put(6,true);
    gpio_put(7,true);

}

void mostrar2(){
gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,true);
    gpio_put(4,false);
    gpio_put(5,false);
    gpio_put(6,true);
    gpio_put(7,false);
}

void mostrar3(){
  gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,true);
    gpio_put(6,true);
    gpio_put(7,false);
}
void mostrar4(){
  gpio_put(1,true);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,true);
    gpio_put(5,true);
    gpio_put(6,false);
    gpio_put(7,false);
}
void mostrar5(){
  gpio_put(1,false);
    gpio_put(2,true);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,true);
    gpio_put(6,false);
    gpio_put(7,false);
}
void mostrar6(){
  gpio_put(1,false);
    gpio_put(2,true);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,false);
    gpio_put(6,false);
    gpio_put(7,false);
}
void mostrar7(){
   gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,true);
    gpio_put(5,true);
    gpio_put(6,true);
    gpio_put(7,true);
}
void mostrar8(){
   gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,false);
    gpio_put(6,false);
    gpio_put(7,false);
}
void mostrar9(){
gpio_put(1,false);
    gpio_put(2,false);
    gpio_put(3,false);
    gpio_put(4,false);
    gpio_put(5,true);
    gpio_put(6,false);
    gpio_put(7,false);
}


int main() {
  stdio_init_all();
  struct repeating_timer timer;
  add_repeating_timer_ms(1000, mostrarNum, NULL, &timer);
  // iniciar y apagar
  for (int i = 1;i<8;i++) {
    gpio_init(i);
    sleep_ms(10);
    gpio_set_dir(i,true);
    sleep_ms(10);
   gpio_put(i,true);
  }
  
  // prender luces
  // 1 = A / 2 = B / 3 = C / 4 = D / 5 = E / 6 = F / 7 = G

  //
  while(true){
    sleep_ms(1000);
  }
}
