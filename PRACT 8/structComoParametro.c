#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

uint8_t num1 = 0;

typedef struct 
{
    char nombre[20];
    uint16_t codigo;
    char descrip[50];
    float precio;
}Producto_t;

//* Variables globales
Producto_t prod1 = {"ATmega328p",328,"MCU AVR ATmega",3.67};
Producto_t prod2 = {"PIC16F18855",450,"MCU PIC16 - Microchip",4.50};
//* Funciones
void getDataProducto(Producto_t px);


void main(void){
    //* Obtener datos del producto
    getDataProducto(prod1);
    printf("%u\n",num1);
    myfun(num1);
    printf("%u\n",num1);
    
}

void myfun(uint8_t a){
    a=10;
}
void getDataProducto(Producto_t px){
    printf("Datos del producto:\n");
    printf("%s\n",px.nombre);
    printf("%u\n",px.codigo);
    printf("%s\n",px.descrip);
    printf("$%.2f\n",px.precio);

    //! strcpy(px.nombre,"ATmega100");
}