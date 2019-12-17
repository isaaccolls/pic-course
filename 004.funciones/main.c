#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT, NOCPD
#use delay(clock=20000000)
#use fast_io(b)

void parpadeo () {
   output_high(pin_b7);
   delay_ms(100);
   output_low(pin_b7);
   delay_ms(100);
}

char parpadeoCustom(int espera, int espera1) {
   output_high(pin_b7);
   delay_ms(espera);
   output_low(pin_b7);
   delay_ms(espera1);
   return 'x';
}

void main() {
   port_b_pullups(true);
   set_tris_b(0);
   // bucle infinito
   while (true) {
      // parpadeo();
      char prueba = parpadeoCustom(150, 50);
   }
}



