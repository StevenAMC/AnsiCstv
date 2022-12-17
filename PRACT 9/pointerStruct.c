#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>




typedef struct 
{
    char name[20];
    uint16_t code;
    float price;

}IC_t;

//* Functions
void writeProductData(IC_t *pIC, char *pName, uint16_t cod,float price);

IC_t ic1,ic2,ic3;
IC_t *ptrIC =NULL;
IC_t *ptrIC1 ;
IC_t *ptrIC2 ;
void main(void){

    writeProductData(&ic2,"PIC32MX",32,9.21);
    printf("Name: %s\n",ic2.name);
    printf("Code: %u\n",ic2.code);
    printf("Price: %.2f\n",ic2.price);
    ptrIC1 = &ic1;
    ptrIC2 = ptrIC1;
    ptrIC1->code = 1551;
    ptrIC2->price = 1152.5;
    printf("Code: %u\n",ic1.code);
    printf("Price: %.2f\n",ic1.price);
    //**********
    ptrIC = &ic1;
    strcpy((*ptrIC).name,"PIC18F45k50");
    (*ptrIC).code = 4550;
    (*ptrIC).price = 4.62;

    printf("Name: %s\n",ic1.name);
    printf("Code: %u\n",ic1.code);
    printf("Price: %.2f\n",ic1.price);

    ptrIC = &ic2;
    strcpy(ptrIC->name,"PIC18F2550");
    ptrIC->code = 2550;
    ptrIC->price = 3.62;

    printf("Name: %s\n",ic2.name);
    printf("Code: %u\n",ic2.code);
    printf("Price: %.2f\n",ic2.price);
}
void writeProductData(IC_t *pIC, char *pName, uint16_t cod,float price){
    strcpy(pIC->name,pName);
    pIC->code = cod;
    pIC->price = price;
}