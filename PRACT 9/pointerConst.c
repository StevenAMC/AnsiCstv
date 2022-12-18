#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int x = 10, y = 16;
int *const ptrConst = &x;
//* Punteros Constantes
uint8_t PORTD,PORTC;
uint8_t *const ptrPD = &PORTD;

//* Punteros a constantes
uint8_t data1 = 22, data2 = 55;
const uint8_t *ptrCst = &data1;
//* Punteros constantes a constantes
const uint8_t datac1 = 12,datac2;

const uint8_t *const ptrCstCst = &datac1;


void main(void){
    //* Cst cst can only read, cant chage direction
    printf("Valor cst cst : %u\n",*ptrCstCst);


    //! *ptrCst = 22;//ERROR
    ptrCst = &data2;
    ptrCst = &data1;
    
    *ptrConst = 12; 
    

    printf("Valor de x = %i\n",x);
    // ptrConst = &y;
    // ptrConst++;
    *ptrPD = 0xBA;
    printf("Valor de PORTD = %X\n",*ptrPD);

}