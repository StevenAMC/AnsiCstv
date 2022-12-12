#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

//* Ahorro memory, no es uso especifico
//* Concepto de tipos de datos genéricos mayormente
typedef union
{
    uint8_t binits;
    uint8_t binits2;
    float flota;
    uint8_t binits3;
} pyty_t;

typedef union
{
    uint8_t mcu_avr;
    uint8_t mcu_pic;
    uint8_t mcu_nxp;
    uint16_t mcu_eeprom;
    uint32_t mcu_expanderio;

} Tienda_t;

Tienda_t container1;

//* Aplcacion creando variables de tipo genérico
typedef union
{
    uint8_t U8Integer;
    uint16_t U16Integer;
    uint32_t U32Integer;
    float F32Flotante;
    char String[20];
} TypeGeneric_t;
//* Variable genérica
TypeGeneric_t datoGenerico;

//* Como comparten la misma posición de memoria
//* Los campos tambien comparten la // // // 
typedef union
{
    struct
    {
        uint8_t TRISD0 : 1;
        uint8_t TRISD1 : 1;
        uint8_t TRISD2 : 1;
        uint8_t TRISD3 : 1;
        uint8_t TRISD4 : 1;
        uint8_t TRISD5 : 1;
        uint8_t TRISD6 : 1;
        uint8_t TRISD7 : 1;
    };
    struct
    {
        uint8_t RD0 : 1;
        uint8_t RD1 : 1;
        uint8_t RD2 : 1;
        uint8_t RD3 : 1;
        uint8_t RD4 : 1;
        uint8_t RD5 : 1;
        uint8_t RD6 : 1;
        uint8_t RD7 : 1;
    };
} TRISDbits_t;

void main(void)
{

    //* Almacenar conteo de personas maximo 200
    datoGenerico.U8Integer = 150;
    datoGenerico.U8Integer += 15;
    printf("Personas : %u\n", datoGenerico.U8Integer);

    //* Almacenar conteo de productos
    datoGenerico.U16Integer = 60560;
    datoGenerico.U16Integer -= 60;
    printf("Productos : %u\n", datoGenerico.U16Integer);

    //* Almacenar conteo de pulsos (tiks)
    datoGenerico.U32Integer = 1000000;
    datoGenerico.U32Integer -= 60;
    printf("Pulsos : %u\n", datoGenerico.U32Integer);

    //* Almacenar temperatura
    datoGenerico.F32Flotante = 150.67;
    datoGenerico.F32Flotante += 20; //* Agrega Offset
    printf("Temperatura : %.2f\n", datoGenerico.F32Flotante);
    strcpy(datoGenerico.String, "Lenguaje Carbon");
    printf("String : %s\n", datoGenerico.String);

    printf("Datos container 1\n");
    container1.mcu_avr = 90;
    printf("MCUs AVR : %u\n", container1.mcu_avr);
    container1.mcu_pic = 20;
    printf("MCUs PIC : %u\n", container1.mcu_pic);
    container1.mcu_nxp = 5;
    printf("MCUs NXP : %u\n", container1.mcu_nxp);
    container1.mcu_eeprom = 110;
    printf("Eeproms : %u\n", container1.mcu_eeprom);
    container1.mcu_expanderio = 80;
    printf("ExpanerIOs : %u\n", container1.mcu_expanderio);

    printf("MCUs AVR : %u\n", container1.mcu_avr);
    printf("MCUs AVR : %u\n", container1.mcu_avr);
    printf("MCUs NXP : %u\n", container1.mcu_nxp);
    printf("Eeproms : %u\n", container1.mcu_eeprom);
    printf("ExpanerIOs : %u\n", container1.mcu_expanderio);

    float numf = 8.88;
    pyty_t flot;
    flot.flota = numf;
    printf("%f\n", flot.flota);
    flot.binits = 25;
    printf("%f\n", flot.flota);
    printf("%u\n", flot.binits);
}