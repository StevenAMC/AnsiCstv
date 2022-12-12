#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
uint8_t horas, minutos, segundos;

int main(void)
{
    printf("\n\n\t\t\t\t>>REOJ DIGITAL<<\n\r");

    for (horas = 0; horas < 24; horas++)
    {
        for (minutos = 0; minutos < 60; minutos++)
        {
            for (segundos = 0; segundos < 60; segundos++)
            {
                printf("\t\t\t\t H:%02u M:%02u S:%02u\r", horas, minutos, segundos);
                fflush(stdout);
                usleep(200000);
                // printf("\n");
                // printf("GAAAAA\r");
                // sleep(1);
                // printf("uwu");
            }
        }
    }

    return 0;
}