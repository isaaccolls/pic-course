// Directivas: controlan la conversión del programa a código de maquina por el compilador
#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT, NOCPD
#use delay(clock=20000000)
#use fast_io(b)

// Funciones: agrupa un conjunto de instrucciones y siempre debe haber una principal llamada main
void main() {
   // Instrucciones: indican cómo debe comportarse el pic
   port_b_pullups(true);
   set_tris_b(0);
   // Comentarios: (opcionales) utilizados para describir
   // bucle infinito
   while (true) {
      output_high(pin_b7);
      delay_ms(100);
      output_low(pin_b7);
      delay_ms(100);
   }
}


