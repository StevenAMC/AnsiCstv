#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//* Teclado matricial 4x4:
char teclado[4][4] = {{'1', '2', '3', 'A'},
                      {'4', '5', '6', 'B'},
                      {'7', '8', '9', 'C'},
                      {'*', '0', '#', 'D'}};

void main(void)
{
    uint8_t fila, columna;
    bool tecla_pulsada = false;

    for (fila = 0; fila < 4; fila++)
    {
        for (columna = 0; columna < 4; columna++)
        {

            //*printf("Fila: %d, Columna: %d, Tecla: %c\n", fila, columna, teclado[fila][columna]);
            printf("%c ",teclado[fila][columna]);
            // if (tecla_pulsada == false)
            // {
            //     if (teclado[fila][columna] == '1')
            //     {
            //         tecla_pulsada = true;
            //         printf("Tecla pulsada: %c\n", teclado[fila][columna]);
            //     }
            // }
            usleep(100000);
            fflush(stdout);
        }
        printf("\n");
    }
}
