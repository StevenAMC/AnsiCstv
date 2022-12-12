#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

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

void main(void)
{
    printf("Horas Lima UTC 4 => Lima (UTC-5): %u\n", utcToLocal(4, -5, 1));
    printf("Horas Lima UTC 4 => Lima (UTC-5): %u\n", utcToLocal(4, -5, 0));

    uint8_t idx1 = 0, idx2 = 0;
    //* Decoding frame header
    while (FrameNMEA[idx2] != ',')
    {
        NMEAcabecera[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAcabecera[idx1] = '\0';
    //* Decoding NMEAtimeUTC
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAtimeUTC[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAtimeUTC[idx1] = '\0';
    //* Decoding latitud
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAlatitude[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAlatitude[idx1] = '\0';
    //* Decoding NS
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAnortSur[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAnortSur[idx1] = '\0';
    //* Decoding NMEAlongit
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAlongit[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAlongit[idx1] = '\0';
    //* Decoding WE
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAwesEast[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAwesEast[idx1] = '\0';
    //* Decoding NMEAfix
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAfix[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAfix[idx1] = '\0';
    //* Decoding NMEAcantSat
    idx1 = 0;
    idx2++;
    while (FrameNMEA[idx2] != ',')
    {
        NMEAcantSateSeguimiento[idx1] = FrameNMEA[idx2];
        idx1++;
        idx2++;
    }
    NMEAcantSateSeguimiento[idx1] = '\0';
    idx1 = 0, idx2 = 0;
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
