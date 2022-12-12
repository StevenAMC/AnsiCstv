//* Operadores a nivel de bits
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
//* Mis funciones
void operadoresBit(void);
void operadoresBit2(void);
void PORTB_set_bit(uint8_t pos_bit);
void PORTB_clear_bit(uint8_t pos_bit);
bool PORTB_get_state_bit(uint8_t pos_bit);


//* Operadores a nivel de bits
// ~ (NOT)
// & (AND)
// | (OR)
// ^ (XOR)
// << (Desplazamiento a la izquierda)
// >> (Desplazamiento a la derecha)

//* Operadores de asignación compuestos
// +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=

uint8_t PORTB;

int main(void)
{   
    PORTB= 0b11101001;
    uint8_t a = 0x0F; // 00001111
    uint8_t b = 0xF0; // 11110000
    uint8_t c = 0x00; // 00000000
    uint8_t d = 0xFF; // 11111111

    printf("a = %2X\n", ~a);
    printf("PORTB = %2X\n", PORTB);
    //* Encender los bits 5 y2 de PORTB
    PORTB |= (1<<5) | (1<<2);
    printf("PORTB = %2X\n", PORTB);
    //* Apagar los bits 7 , 3 y  0 de PORTB
    PORTB &= ~((1<<7) | (1<<3) | (1<<0));
    //PORTB &= ~(1<<7) & ~(1<<0);
    printf("PORTB = %2X\n", PORTB);
    //* Invertir los bits 6 y 1 de PORTB
    PORTB ^= (1<<6) | (1<<1);
    printf("PORTB = %2X\n", PORTB);

    PORTB= 0b11101001;
    //* Determinar el estado del bit 3
    bool bit3 = PORTB & (1<<3);
    printf("bit3 = %d\n", bit3);
    //* Determinar el estado del bit 4
    if ((PORTB & 0b00010000) == 0){
        printf("bit4 = 0\n");
    }else{
        printf("bit4 = 1\n");
    }    
    //* !=0 el bit x es 1
    
    //* Desplazar 2 posiciones a la izq
    PORTB <<= 2;
    // PORTB = (PORTB << 2);
    operadoresBit();
    PORTB= 0b11101001;
    if (PORTB_get_state_bit(0) == true){
        printf("El bit está encendido\n");
    }

    return 0;

}

void operadoresBit(void){
    printf("Operadores de asignación compuestos\n+=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=\n");
    //* Encender el bit 2
    PORTB |= 0b00000100;
}
void operadoresBit2(void){
    //* Encender el bit 2
    PORTB |= (1<<2);

    if ((PORTB & (1<<1) != 0)){
        printf("El estado del bit q es 1");

    }
}

void PORTB_set_bit(uint8_t pos_bit){
    PORTB |= (1<<pos_bit);
}

void PORTB_clear_bit(uint8_t pos_bit){
    PORTB &= ~(1<<pos_bit);
}

bool PORTB_get_state_bit(uint8_t pos_bit){
    return (PORTB & (1<<pos_bit));
}
