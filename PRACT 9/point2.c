#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

uint16_t sueldos[5] = {1400,1025,1700,2000,3600};
uint16_t *pt = NULL;

int main(void){
    pt = sueldos; //* El puntero apunta a la dir de memoria del primer elemento del arrelo
    printf("Sueldos[0]: %u\n",*pt);
    pt++;
    printf("Sueldos[1]: %u\n",*pt);
    pt+=2;
    printf("Sueldos[3]: %u\n",*pt);
    *pt=100;
    printf("Sueldos[3]: %u\n",*pt);
    pt++;
    printf("Sueldos[4]: %u\n",*pt);
    pt-=4;
    *pt =1;
    printf("Sueldos[0]: %u\n",*pt);
    
    
}