#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "time_strctrs.h"
#include <string.h>

Date_t cumple1 = {1997, 10, 5, "Octubre"};
RTCTime_t tiempo1 = {12, 30, 0};

typedef struct
{
    char nombre[20];
    char apellido[20];
    char universidad[20];
    char puesto[20];
    uint8_t ciclo;
    float pretSalarial;
} Practicante_t;

typedef struct
{
    char NMEAcabecera[10];
    char NMEAtimeUTC[10];
    char NMEAlatitude[20];
    char NMEAnortSur[5];
    char NMEAlongit[20];
    char NMEAwesEast[5];
    char NMEAfix[5];
    char NMEAcantSateSeguimiento[5];

} NMEA_t;

typedef struct 
{
    char direccion[50];
    char ciudad[20];
    char provincia[20]; 
    char codigoPostal[10];
}Info_Dir_t;

typedef struct 
{
    char nombres[20];
    float salario;
    Info_Dir_t direccion;
}Empleado_t;



//* Definir objetos

Practicante_t p1, p2;
NMEA_t frameGPS1, frameGPS2;
Practicante_t practicante[100];
//* En cada indice del arreglo se guarda un objeto de tipo Practicante_t
/*
Primer objeto del arreglo, segundo objeto del arreglo, etc. ... objeto 100
practicante[0].nombre
practicante[0].apellido
practicante[0].universidad
practicante[0].puesto
practicante[0].ciclo
practicante[0].pretSalarial
...
*/

Empleado_t emp1;


void main(void)
{
    strcpy(p1.nombre, "Steven");
    strcpy(p1.apellido, "Matos");
    strcpy(p1.universidad, "UTN");
    strcpy(p1.puesto, "Practicante Elec.");
    p1.ciclo = 9;
    p1.pretSalarial = 1000.0;
    // Datos de p1
    printf("Nombre: %s\n", p1.nombre);
    printf("Apellido: %s\n", p1.apellido);
    printf("Universidad: %s\n", p1.universidad);
    printf("Puesto: %s\n", p1.puesto);
    printf("Ciclo: %d\n", p1.ciclo);
    printf("Pret. Salarial: %.2f\n", p1.pretSalarial);

    strcpy(practicante[0].nombre, "Juan");
    strcpy(practicante[0].apellido, "Perez");
    strcpy(practicante[0].universidad, "UTN");
    strcpy(practicante[0].puesto, "Practicante Elec.");
    practicante[0].ciclo = 9;
    practicante[0].pretSalarial = 1000.0;
    printf("\n");
    printf("Nombre: %s\n", practicante[0].nombre);
    printf("Apellido: %s\n", practicante[0].apellido);
    printf("Universidad: %s\n", practicante[0].universidad);
    printf("Puesto: %s\n", practicante[0].puesto);
    printf("Ciclo: %d\n", practicante[0].ciclo);
    printf("Pret. Salarial: %.2f\n", practicante[0].pretSalarial);

    char FrameNMEA[] = "$GPGGA,123519,4807.38,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*42";
    strcpy(frameGPS1.NMEAcabecera, strtok(FrameNMEA, ","));
    strcpy(frameGPS1.NMEAtimeUTC, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAlatitude, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAnortSur, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAlongit, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAwesEast, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAfix, strtok(NULL, ","));
    strcpy(frameGPS1.NMEAcantSateSeguimiento, strtok(NULL, ","));

    if (frameGPS1.NMEAfix[0] == '0')
    {
        printf("Datos invalidos\n");
    }
    else
    {
        printf("Datos validos\n");
        printf("\n");
        printf("Cabecera: %s\n", frameGPS1.NMEAcabecera);
        printf("Tiempo UTC: %s\n", frameGPS1.NMEAtimeUTC);
        printf("Latitud: %s\n", frameGPS1.NMEAlatitude);
        printf("Norte o Sur: %s\n", frameGPS1.NMEAnortSur);
        printf("Longitud: %s\n", frameGPS1.NMEAlongit);
        printf("Oeste o Este: %s\n", frameGPS1.NMEAwesEast);
        printf("Fix: %s\n", frameGPS1.NMEAfix);
        printf("Cantidad de satelites en seguimiento: %s\n", frameGPS1.NMEAcantSateSeguimiento);
    }

    printf("\nEmpleado emp1\n");
    strcpy(emp1.nombres, "Juan Perez");
    emp1.salario = 1000.0;
    strcpy(emp1.direccion.direccion, "Calle 1");
    strcpy(emp1.direccion.ciudad, "Ciudad Z");
    strcpy(emp1.direccion.provincia, "Provincia Y");
    strcpy(emp1.direccion.codigoPostal, "CP 1234");
    printf("Nombre: %s\n", emp1.nombres);
    printf("Salario: %.2f\n", emp1.salario);
    printf("Direccion: %s\n", emp1.direccion.direccion);
    printf("Ciudad: %s\n", emp1.direccion.ciudad);
    printf("Provincia: %s\n", emp1.direccion.provincia);
    printf("Codigo Postal: %s\n", emp1.direccion.codigoPostal);

    // Fecha1.day = 12;
    //* Fecha de cumpleaños:
    printf("Fecha de cumpleaños: %02d/%02d/%d (%s)\n", cumple1.day, cumple1.month, cumple1.year, cumple1.monthName);
    strcpy(cumple1.monthName, "Enero");
    printf("Fecha de cumpleaños: %02d/%02d/%d (%s)\n", cumple1.day, cumple1.month, cumple1.year, cumple1.monthName);
    //* Solo al inicializar se asigna la cadena
    //! cumple1.monthName = "Febrero" ERROR! usar indices
}
