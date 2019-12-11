## Variables
Una variable es un objeto nombrado capaz de contener un dato que puede ser modificado durante la ejecución de programa.

Se declaran de la siguiente manera:
```
[TIPO_DE_DATO] [NOMBRE_VARIABLE] = [VALOR_INICIAL]
```

### Tipos de datos:
| Tipo         | Tamaño | Rango                         | Descripción             |
|--------------|--------|-------------------------------|-------------------------|
| int1 ó short | 1 bit  | 0 a 1                         | Entero de 1 bit         |
| int ó int8   | 8 bit  | 0 a 255                       | Entero                  |
| int16 ó long | 16 bit | 0 a 65.535                    | Entero de 16 bit        |
| int32        | 32 bit | 0 a 4.294.967.295             | Entero de 32 bit        |
| float        | 32 bit | ±1.175x10^-38 a ±3.402x10^+38 | Coma flotante           |
| char         | 8 bit  | 0 a 255                       | Carácter                |
| void         | -      | -                             | Sin valor               |
| signed int8  | 8 bit  | -128 a +127                   | Entero con signo        |
| signed int16 | 16 bit | -32768 a + 32767              | Entero largo con signo  |
| signed int32 | 32 bit | -2^31 a +(2^31-1)             | Entero 32 bit con signo |

### Ejemplos de declaracion de variables
```
short bandera = 0;
int espera = 200;
int16 esperaLarga = 60000;
int32 distanciaRecorrida = 0;
float temperaturaActual;
char ingresado = ' ';
signed int8 intConSigno = -21;
signed int16 int16ConSigno = -420;
signed int32 int32ConSigno = 420;
```

## Constantes
Una constante tiene las mismas características que una variable excepto que su valor no puede ser cambiado durante la ejecución de programa.

### Ejemplos de declaracion de constantes
```
const int valorMinimo = 16;
const float pi = 3.14;
const char validador = '#';
```

## Clases de almacenamiento
Las clases de almacenamiento se utilizan para definir el ámbito y la vida de variables, constantes y funciones dentro de un programa.
- auto: almacenamiento por defecto para las variables locales
- static: almacenamiento por defecto para las variables globales. Las variables locales declaradas con el prefijo static se les puede acceder dentro del archivo fuente (se comportan como variables globales).
- extern: se utiliza cuando el programa está compuesto por diferentes archivos fuente. Esto permite utilizar una variable, una constante o una función declarada en otro archivo.
```
auto int var_auto;
static int var_static;
extern int var_extern;
```
