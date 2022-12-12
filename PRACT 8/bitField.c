#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

typedef struct
{
    uint8_t TRISD0 : 1;
    uint8_t TRISD1 : 1;
    uint8_t TRISD2 : 1;
    uint8_t TRISD3 : 1;
    uint8_t TRISD4 : 1;
    uint8_t TRISD5 : 1;
    uint8_t TRISD6 : 1;
    uint8_t TRISD7 : 1;
} TRISDbits_t;

typedef struct
{
    uint8_t RD0 : 1;
    uint8_t RD1 : 1;
    uint8_t RD2 : 1;
    uint8_t RD3 : 1;
    uint8_t RD4 : 1;
    uint8_t RD5 : 1;
    uint8_t RD6 : 1;
    uint8_t RD7 : 1;
} PORTDbits_t;

typedef struct
{
    uint8_t LATD0 : 1;
    uint8_t LATD1 : 1;
    uint8_t LATD2 : 1;
    uint8_t LATD3 : 1;
    uint8_t LATD4 : 1;
    uint8_t LATD5 : 1;
    uint8_t LATD6 : 1;
    uint8_t LATD7 : 1;
} LATDbits_t;

typedef struct
{
    uint8_t SLRA : 1;
    uint8_t SLRB : 1;
    uint8_t SLRC : 1;
    uint8_t SLRD : 1;
    uint8_t SLRE : 1;
    uint8_t reserved : 3; // TODO: uint8_t : 3;
} SLRCONbits_t;

typedef struct
{
    uint8_t CCP1M : 4;
    uint8_t DC1B : 2;
    uint8_t CCP1X : 2;
} CCP1CONbits_t;

typedef struct
{
    uint8_t DDRC0 : 1;
    uint8_t DDRC1 : 1;
    uint8_t DDRC2 : 1;
    uint8_t DDRC3 : 1;
    uint8_t DDRC4 : 1;
    uint8_t DDRC5 : 1;
    uint8_t DDRC6 : 1;
    uint8_t : 1;
} DDRCbits_t;

typedef struct
{
    uint8_t WGM0 : 2;
    uint8_t : 2;
    uint8_t COM0B : 2;
    uint8_t COM0A : 2;
} TCCR0Cbits_t;

typedef struct
{
    uint8_t WGM0 : 2;
    uint8_t : 2;
    uint8_t COM0B : 2;
    uint8_t COM0A : 2;
} TCCR0Abits_t;
typedef struct
{
    uint8_t XFDIE : 1;
    uint8_t XFDIF : 1;
    uint8_t : 6;
} XFDCSRbits_t;

void main(void)
{
    TRISDbits_t TRISDBits;
    XFDCSRbits_t XFDCRbits;
    TCCR0Abits_t TCCR0Abits;
    TRISDBits.TRISD0 = 0;
    XFDCRbits.XFDIE = 1;
    TCCR0Abits.WGM0 = 0b011;
    printf("%u\n",TCCR0Abits.WGM0);


}