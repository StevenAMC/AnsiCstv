#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//* Funciones
void toggleRedLed(void);
void toggleBlueLed(void);
void toggleGreenLed(void);
//*Puntero a funcion
void (*ptrFunct)(void);

void main(void)
{
    
    while (1)
    {   
        ptrFunct = toggleRedLed;
        //*Llamado a funct a traves de puntero
        (*ptrFunct)();
        ptrFunct = toggleGreenLed;
        ptrFunct();
        ptrFunct = toggleBlueLed;
        ptrFunct();
    }
}
void toggleRedLed(void)
{
    printf("Red Led =ON\n");
    sleep(1);
    printf("Red Led =OFF\n");
    sleep(1);
}
void toggleGreenLed(void)
{
    printf("Green Led =ON\n");
    sleep(1);
    printf("Green Led =OFF\n");
    sleep(1);
}
void toggleBlueLed(void)
{
    printf("Blue Led =ON\n");
    sleep(1);
    printf("Blue Led =OFF\n");
    sleep(1);
}