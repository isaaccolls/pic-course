## Operadores

Permiten operar los datos de un programa. En C y particularmente el compolador de CCS nos ofrece los siguientes:

### Aritmeticos
Permiten la realizar de operaciones matemáticas.

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

### Relacionales
Compara dos operandos y devuelve 1 (verdadero) ó 0 (falso) según el resultado de la expresión.

| Operador | Descripción           |
|----------|-----------------------|
| <        | Menor que             |
| >        | Mayor que             |
| <=       | Menor o igual que     |
| >=       | Mayor o igual que     |
| ==       | Igual a               |
| ¡=       | Distinto de           |
| ?:       | Expresion condicional |

### Asignación
Permiten asignar valores a las variables.

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
| \|=      | Asignación de OR de bits  (x\|=y es lo mismo que x=x\|y)                   |
| ^=       | Asignación de OR exclusivo de bits (XOR) (x^=y es lo mismo que x=x^y)      |

### Lógicos
Al igual que los operadores relacionales, éstos devuelven 1 (verdadero), 0 (falso) tras la evaluación de sus operandos.

| Operador | Descripción |
|----------|-------------|
| !        | NOT         |
| &&       | AND         |
| \|\|     | OR          |

### Bits
Permiten actuar sobre los operandos para modificar un solo bit

| Operador | Descripción                        |
|----------|------------------------------------|
| ~        | Negación de bits (complemento a 1) |
| &        | AND                                |
| \|       | OR                                 |
| ^        | XOR                                |
| >>       | Desplazamiento a la derecha        |
| <<       | Desplazamiento a la izquierda      |

## Punteros
Permiten operar punteros

| Operador | Descripción          |
|----------|----------------------|
| &        | Dirección            |
| *        | Inderección          |
| ->       | Puntero a estructura |

## Precedencia de los operadores
Las operaciones con mayor precedencia se realizan antes que las de menor precedencia. Si en una operación encontramos signos del mismo nivel de precedencia, dicha operación se realiza de izquierda a derecha.

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
| expr \| expr                                    |              |             |              |        |             |
| expr&& expr                                     |              |             |              |        |             |
| expr \|\| expr                                  |              |             |              |        |             |
| expr ? expr: expr                               |              |             |              |        |             |
| value = expr                                    | value+=expr  | value-=expr |              |        |             |
| value*=expr                                     | value/=expr  | value%=expr |              |        |             |
| value>>=expr                                    | value<<=expr | value&=expr |              |        |             |
| value^=expr                                     | value\|=expr | expr,expr   |              |        |             |
