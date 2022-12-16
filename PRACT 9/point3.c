#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


//* Arreglo de punteros
char *ptr[4]; //* Cuatro punteros
//* Estructura de punteros? Diferente tipo
char hc[] = "Hola desde C";

void main(void){
    printf("FFF\n");
    ptr[0] = "Curso Lenguaje C";
    ptr[1] = "Curso Mircrocontroladores PIC";
    ptr[2] = "Curso electrónica analógica";
    ptr[3] = "Sistemas HMI con Nextion";

    while (*ptr[0] != '\0')
    {
        printf("%c",*ptr[0]);
        ptr[0]++;
        usleep(50000);
        fflush(stdout);
    }
    printf("\n");
    printf("%s\n",ptr[1]);
    printf("%s\n",ptr[2]);
    printf("%s\n",ptr[3]);
    ptr[0] = "MOTD";
    printf("%s\n",ptr[0]);
    ptr[0] = hc;
    printf("%s\n",ptr[0]);

    for (uint8_t    i = 0; i < 3; i++)
    {
        printf("%p\n",&ptr[i]);
    }
    

}