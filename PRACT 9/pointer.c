#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


void sumalo(uint8_t *num);

void main(void)

{
    uint8_t offs = 25;
    uint8_t *p = &offs;
    printf("%i\n",offs);
    //printf("0x%X\n",&offs);
    sumalo(p);
    printf("%p\n",&offs);
    printf("%i\n",offs);

}
// Hola git
void sumalo(uint8_t *num){
    *num = *num + 1;
}
