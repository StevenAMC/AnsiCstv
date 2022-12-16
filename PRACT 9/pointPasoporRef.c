#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
//* Pasos de parámetro por referencia
//* No por valor


void sumalo(uint8_t *num);

uint8_t numero =20;
void main(void)
{
    printf("%u\n",numero);
    sumalo(&numero);
    printf("%u\n",numero);
}

void sumalo(uint8_t *num)
{
    *num = *num + 1;
}   



