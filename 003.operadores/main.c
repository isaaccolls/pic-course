#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT, NOCPD
#use delay(clock=20000000)
#use fast_io(b)

void main() {
/*
Aritmeticos
| Operador | Descripción                                |
|----------|--------------------------------------------|
| +        | Suma                                       |
| -        | Resta                                      |
| *        | Multiplicación                             |
| /        | División                                   |
| %        | Módulo (Resto de una división entera)      |
| ++       | Incrementa en uno el valor del operando    |
| --       | Decrementa en uno el valor del operando    |
| sizeof   | Determina el tamaño, en bytes, un operando |
*/
   int a = 5;
   int b = 3;
   int suma = a + b;
   int mult = a * b;
   int mod = a % 2;
   int c = b++;
/*
Relacionales
| Operador | Descripción           |
|----------|-----------------------|
| <        | Menor que             |
| >        | Mayor que             |
| <=       | Menor o igual que     |
| >=       | Mayor o igual que     |
| ==       | Igual a               |
| ¡=       | Distinto de           |
| ?:       | Expresion condicional |
*/
   int mayor = a > b;
   int igual = a == b;
/*
Asignación
| Operador | Descripción                                                                |
|----------|----------------------------------------------------------------------------|
| +=       | Asignación de suma (x+=y es lo mismo que x=x+y)                            |
| -=       | Asignación de resta (x-=y es lo mismo que x=x-y)                           |
| *=       | Asignación de multiplicación (x*=y es lo mismo que x=x*y)                  |
| /=       | Asignación de división (x/=y es lo mismo que x=x/y)                        |
| %=       | Asignación de resto de división (x%=y es lo mismo que x=x%y)               |
| <<=      | Asignación de desplazamiento a la izquierda (x<<=y es lo mismo que x=x<<y) |
| >>=      | Asignación de desplazamiento a la derecha (x>>=y es lo mismo que x=x>>y)   |
| &=       | Asignación de AND de bits (x&=y es lo mismo que x=x&y)                     |
| |=       | Asignación de OR de bits  (x|=y es lo mismo que x=x|y)                     |
| ^=       | Asignación de OR exclusivo de bits (XOR) (x^=y es lo mismo que x=x^y)      |
*/
   a+=b;
   a = a + b;
/*
Lógicos
| Operador | Descripción |
|----------|-------------|
| !        | NOT         |
| &&       | AND         |
| ||       | OR          |
a && b
*/
/*
Bits
| Operador | Descripción                        |
|----------|------------------------------------|
| ~        | Negación de bits (complemento a 1) |
| &        | AND                                |
| |        | OR                                 |
| ^        | XOR                                |
| >>       | Desplazamiento a la derecha        |
| <<       | Desplazamiento a la izquierda      |
*/
/*
Punteros
| Operador | Descripción          |
|----------|----------------------|
| &        | Dirección            |
| *        | Inderección          |
| ->       | Puntero a estructura |
*/
   int *x;
   x = &b;
   port_b_pullups(true);
   set_tris_b(0);
   // bucle infinito
   while (true) {
      output_high(pin_b7);
      delay_ms(100);
      output_low(pin_b7);
      delay_ms(100);
   }
}

/*
Precedencia de los operadores
| Expresiones                                     | en           | orden       | descendente  | de     | precedencia |
|-------------------------------------------------|--------------|-------------|--------------|--------|-------------|
| (expr)                                          |              |             |              |        |             |
| !expr                                           | ~expr        | ++expr      | expr++       | --expr | expr --     |
| (type)expr                                      | *expr        | &value      | sizeof(type) |        |             |
| expr*expr                                       | expr/expr    | expr%expr   |              |        |             |
| expr+expr                                       | expr-expr    |             |              |        |             |
| expr<<expr                                      | expr>>expr   |             |              |        |             |
| expr<expr                                       | expr<=expr   | expr>expr   | expr>=expr   |        |             |
| expr == expr                                    | expr!=expr   |             |              |        |             |
| expr&expr                                       |              |             |              |        |             |
| expr^expr                                       |              |             |              |        |             |
| expr | expr                                     |              |             |              |        |             |
| expr&& expr                                     |              |             |              |        |             |
| expr || expr                                    |              |             |              |        |             |
| expr ? expr: expr                               |              |             |              |        |             |
| value = expr                                    | value+=expr  | value-=expr |              |        |             |
| value*=expr                                     | value/=expr  | value%=expr |              |        |             |
| value>>=expr                                    | value<<=expr | value&=expr |              |        |             |
| value^=expr                                     | value|=expr  | expr,expr   |              |        |             |
*/



