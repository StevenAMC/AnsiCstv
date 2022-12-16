#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


void sumalo(uint8_t *num);


uint16_t datoA = 1234, datoB = 155;
uint16_t *pg;


void main(void)

{
    uint8_t offs = 25;

    uint8_t *p;
    p = &offs;
    printf("%i\n",offs);
    //printf("0x%X\n",&offs);
    sumalo(p);
    printf("%p\n",&offs);
    printf("%i\n",offs);

    //* El puntro apunta a la direccion de memoria, guarda al dir. de memoria
    pg = &datoA;
    printf("%i\n",datoA);
    printf("%i\n",*pg);
    *pg = 1001; //* Acceso indirecto a la direccion de memoria del dato
    printf("%i\n",datoA);
    //* Dato B
    pg = &datoB;
    printf("%i\n",*pg);

    pg = NULL;
    p = NULL;
    uint8_t arr[10] = {1,2,3,4,5,6,7,8,9,10};
    p =&arr[0];

    for (uint8_t i = 0; i < 10; i++)
    {   
        printf("%p\n",p);
        printf("%u\n",*p);
        p++;
    }


}
// Hola git
void sumalo(uint8_t *num){
    *num = *num + 1;
}
