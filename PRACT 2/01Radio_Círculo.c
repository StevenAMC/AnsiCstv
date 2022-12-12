#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


#define PI 3.14159
#define UMMBRAL_TEMPERATURA 100
#define LIMITE_EDAD 18

uint8_t numb = 255, edad = 17;
int16_t numc = 1512; // 2¹⁶-1
int32_t numd = -1512;
char charita = 'a';
char *cosas = "dsjsd";
uint8_t diaDeLaSemana = 1;

bool ventiladorOn = false;

int main(void)
{
    long double radius, area;

    uint16_t dato1 = 212;
    uint16_t dato2 = 210;
    uint16_t resultado;
    // Calculate area of circle
    radius = 12;
    area = PI * radius * radius;
    printf("Area = %LF\n", area);
    printf("Area = %.12Lg\n", area);
    printf("numb = %u\n", numb);
    printf("numc = %d\n", numc);
    printf("numd = %d\n", numd);

    printf("charita = %c\n", charita);
    printf("cosas = %s\n", cosas);

    resultado = dato1 + dato2;
    printf("resultado = %d\n", resultado);
    resultado = dato1 / dato2;
    printf("resultado = %d\n", resultado);
    resultado = dato1 * dato2;
    printf("resultado = %d\n", resultado);

    if (resultado > UMMBRAL_TEMPERATURA && ventiladorOn == true)
    {
        printf("Ventilador encendido\n");
    }
    else
    {
        printf("Ventilador apagado\n");
    }

    if (edad >= LIMITE_EDAD)
    {
        printf("Puede votar\n");
    }
    else
    {
        printf("No puede votar\n");
    }
    //*Else if
    if (edad >= LIMITE_EDAD)
    {
        printf("Puede votar\n");
    }
    else if (edad == 17)
    {
        printf("Puede votar en 1 año\n");
    }
    else
    {
        printf("No puede votar\n");
    }
    // Ternario:
    // (condicion) ? (si es verdadero) : (si es falso)
    (edad >= LIMITE_EDAD) ? printf("Puede votar\n") : printf("No puede votar\n");

    if (diaDeLaSemana == 1)
    {
        printf("Lunes\n");
    }
    else if (diaDeLaSemana == 2)
    {
        printf("Martes\n");
    }
    else if (diaDeLaSemana == 3)
    {
        printf("Miercoles\n");
    }
    else if (diaDeLaSemana == 4)
    {
        printf("Jueves\n");
    }
    else if (diaDeLaSemana == 5)
    {
        printf("Viernes\n");
    }
    else if (diaDeLaSemana == 6)
    {
        printf("Sabado\n");
    }
    else if (diaDeLaSemana == 7)
    {
        printf("Domingo\n");
    }
    else
    {
        printf("Dia invalido\n");
    }
    //* Ejemplo switch
    switch (diaDeLaSemana)
    {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    default:
        printf("otro día en el mundo");
    }

    uint8_t i = 0;
    while (i < 12)
    {
        printf("i = %02u\n", i);
        i++;   
        usleep(100000);
    }
    while(1){
        i++;
        printf("%02i\n",i);
        if (i==10){
            break;
        }
    }

    do{
        printf("Holi boli\n");
    }while(i!=10);

    for (uint8_t i = 0; i < 20; i++)
    {
        printf("Hola %u\n",i);
    }
    
    //for(;;) blucle infinito como el while
}