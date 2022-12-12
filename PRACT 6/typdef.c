#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//* Sinónimos de tipos de datos
typedef int entero;
typedef unsigned char byte;

void main(void){
    //* Variables de aplicación
    entero num = 1;
    byte byteTx = 0xDA;
    printf("%d\n",num);
    printf("%X\n",byteTx);

}

