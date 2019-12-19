#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT, NOCPD
#use delay(clock=20000000)
#use fast_io(b)

void prueba() {
/*
   int a = 7;
   if (a % 2 == 0) {
      output_high(pin_b6);
   } else {
      output_low(pin_b6);
   }
*/
/*
   char ingresado = '*';
   switch (ingresado) {
      case '0':
         output_low(pin_b6);
         break;
      case '1':
         output_low(pin_b6);
         break;
      case '2':
         output_high(pin_b6);
         break;
      default:
         output_low(pin_b6);
   }
*/
   int j;
   for (j = 0; j <= 10; j++) {
      if (j % 2 == 0) {
         output_high(pin_b6);
         delay_ms(100);
      } else {
         output_low(pin_b6);
         delay_ms(100);
      }
   }
}

void main() {
   port_b_pullups(true);
   set_tris_b(0);
   // bucle infinito
   int z = 2;
   while (z < 3) {
      prueba();
      output_high(pin_b7);
      // delay_ms(100);
      // output_low(pin_b7);
      // delay_ms(100);
   }
}

