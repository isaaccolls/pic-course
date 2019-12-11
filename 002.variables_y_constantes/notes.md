[TIPO_DE_DATO] [NOMBRE_VARIABLE] = [VALOR_INICIAL]

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


short bandera = 0;
int espera = 200;
int16 esperaLarga = 60000;
int32 distanciaRecorrida = 0;
float temperaturaActual;
char ingresado = ' ';
signed int8 intConSigno = -21;
signed int16 int16ConSigno = -420;
signed int32 int32ConSigno = 420;


const int valorMinimo = 16;
const float pi = 3.14;
const char validador = '#';


auto int var_auto;
static int var_static;
extern int var_extern;