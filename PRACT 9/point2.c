#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


uint16_t sueldos[5] = {1400, 1025, 1700, 2000, 3600};
uint16_t *pt = NULL;

char text[] = "Ansi C para micros";
char *cPtr = NULL;

char *ptrString = "Micro PIC cadena constante";
uint8_t *arr = {1,2,3};
int main(void)
{
    pt = sueldos; //* El puntero apunta a la dir de memoria del primer elemento del arrelo
    printf("Sueldos[0]: %u\n", *pt);
    pt++;
    printf("Sueldos[1]: %u\n", *pt);
    pt += 2;
    printf("Sueldos[3]: %u\n", *pt);
    *pt = 100;
    printf("Sueldos[3]: %u\n", *pt);
    pt++;
    printf("Sueldos[4]: %u\n", *pt);
    pt -= 4;
    *pt = 1;
    printf("Sueldos[0]: %u\n", *pt);

    cPtr = text;
    while (*cPtr != '\0')
    {
        printf("%c",*cPtr);
        cPtr++;
        usleep(50000);
        fflush(stdout);
    }
    printf("\n");

    // while (*ptrString != '\0')
    // {
    //     printf("%c",*ptrString);
    //     ptrString++;
    //     usleep(50000);
    //     fflush(stdout);
    // }
    // printf("\n");
    // printf("%p",&arr);
    // printf("%u\n",*arr);
    // return 0;
    

    

}