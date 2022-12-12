#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

//* NMEA : Formato estandar admitido por fabricantes de GPS

uint8_t utcToLocal(uint8_t horas, int8_t desfase, bool formato);

char FrameNMEA[] = "$GPGGA,123519,4807.38,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*42";
//* Desentramar la trama NMEA (Descomponer en componentes individuales)
char NMEAcabecera[10];
char NMEAtimeUTC[10];
char NMEAlatitude[20];
char NMEAnortSur[5];
char NMEAlongit[20];
char NMEAwesEast[5];
char NMEAfix[5];
char NMEAcantSateSeguimiento[5];

char claveUsuario[] = "145$$55";
char claveIngresada[] = "145$$5";
char motd[] = "Bienvenido Stv";
char estrin[] = "C Language";
char cpy_estrin[30];
char apellido[] = "Matos C.";
char nombreYapellido[60] = "Steven";

void main(void)
{
    //* strlen(Cadena) Tamaño sin contar el caracter nulo
    uint16_t tamCadena = 0;
    tamCadena = strlen(FrameNMEA);
    printf("Tamaño de FrameNMEA = %u\n", tamCadena);
    printf("Cant. de bytes de FrameNMEA = %u\n", sizeof(FrameNMEA));

    char peque[100] = "Holi";
    printf("Tamaño de peque = %u\n", strlen(peque));
    printf("Cant. de bytes de peque = %u\n", sizeof(peque));

    if (strcmp(claveUsuario, claveIngresada) == 0)
    {
        printf("Comparación : %u\n", strcmp(claveUsuario, claveIngresada));
        printf("Las claves son iguales :)\n");
    }
    else
    {
        printf("Las claves son diferentes :/\n");
    }

    //* strstr() devuelve num si no encuentra la subcadenaa
    if (NULL != strstr(motd, "Stv"))
    {
        printf("Se encontró la subcadena.\n");
    }
    else
    {
        printf("La subcadena no se encuentra\n");
    }

    //* strcpy() copiar subcadena fuente a destino
    strcpy(cpy_estrin, estrin);
    printf("Nuevo contenido de cpy_estrin : %s\n", cpy_estrin);
    strcpy(cpy_estrin, "Los pollos hermosos");
    printf("Nuevo contenido de cpy_estrin : %s\n", cpy_estrin);

    printf("\nHoras Lima UTC 4 => Lima (UTC-5): %u\n", utcToLocal(4, -5, 1));
    printf("Horas Lima UTC 4 => Lima (UTC-5): %u\n\n", utcToLocal(4, -5, 0));

    //* strcat()
    strcat(nombreYapellido, " ");
    strcat(nombreYapellido, apellido);
    printf("Cadena concat. nombreYapellido: %s\n", nombreYapellido);

    //*memset() limpiar o escribir en los n primeros bytes
    memset(cpy_estrin, 'G', 7);
    printf("Nuevo contenido de cpy_estrin : %s\n", cpy_estrin);
    memset(cpy_estrin, 0x00, sizeof(cpy_estrin));
    printf("Nuevo contenido de cpy_estrin : %s\n", cpy_estrin);
    
    printf("Trama NMEA: %s\n", FrameNMEA);
    strcpy(NMEAcabecera, strtok(&FrameNMEA[3], ","));
    printf("Trama NMEA: %s\n", FrameNMEA);
    strcpy(NMEAtimeUTC, strtok(NULL, ","));
    strcpy(NMEAlatitude, strtok(NULL, ","));
    strcpy(NMEAnortSur, strtok(NULL, ","));
    strcpy(NMEAlongit, strtok(NULL, ","));
    strcpy(NMEAwesEast, strtok(NULL, ","));
    strcpy(NMEAfix, strtok(NULL, ","));
    strcpy(NMEAcantSateSeguimiento, strtok(NULL, ","));
    printf("Trama NMEA: %s\n", FrameNMEA);


    //* Evaluamos Fix
    if (NMEAfix[0] == '0')
    {
        printf("Valores descartados, mala conexión.\n");
        printf("No se puede procesar la información.\n");
    }
    else
    {
        printf("GPS conectado correctamente. 😎\n");
        printf("La información es correcta, se puede procesar:\n");
        //* Imprimir datos correctos
        printf("NMEAcabecera = %s\n", NMEAcabecera);
        printf("NMEAtimeUTC = %s\n", NMEAtimeUTC);
        printf("NMEAlatitude = %s\n", NMEAlatitude);
        printf("NMEAnortSur = %s\n", NMEAnortSur);
        printf("NMEAlongit = %s\n", NMEAlongit);
        printf("NMEAwesEast = %s\n", NMEAwesEast);
        printf("NMEAfix = %s\n", NMEAfix);
        printf("NMEAcantSateSeguimiento = %s\n", NMEAcantSateSeguimiento);
    }
}

/**
 * @brief
 *
 * @param horas
 * @param desfase   (UTC+- desfase)
 * @param formato Valor 0 -> formato 12h, 1-> formato 24h
 * @return uint8_t
 */
uint8_t utcToLocal(uint8_t horas, int8_t desfase, bool formato)
{
    if (formato == 1)
    {
        //* Formato 24 horas
        return horas + (horas < 5) * 24 + desfase;
    }
    else
    {
        //* Formato 12 horas
        return horas + (horas < 5) * 12 + desfase;
    }
}
