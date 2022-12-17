#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define MOTORON 1
#define MOTOROFF 0

void motorControl1(uint8_t state);
void motorControl2(uint8_t state);
void motorControl3(uint8_t state);

void (*ptrFunct)(uint8_t);

void main(void)
{
    ptrFunct = motorControl1;
    //*Llamado de la funcion por medio del puntero
    (*ptrFunct)(MOTORON);
    ptrFunct = motorControl2;
    ptrFunct(MOTOROFF);
    ptrFunct = motorControl3;
    ptrFunct(MOTOROFF);
}

void motorControl1(uint8_t state)
{
    if (state == MOTORON)
        printf("Motor 1 = Activado\n");
    else
        printf("Motor 1 = Apagado\n");
}
void motorControl2(uint8_t state)
{
    if (state == MOTORON)
        printf("Motor 2 = Activado\n");
    else
        printf("Motor 2 = Apagado\n");
}
void motorControl3(uint8_t state)
{
    if (state == MOTORON)
        printf("Motor 3 = Activado\n");
    else
        printf("Motor 3 = Apagado\n");
}