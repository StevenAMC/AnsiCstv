#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>


#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0

#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4


void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t value);
bool digitalRead(uint8_t pin);
void serialBegin(uint32_t baudRate);


//* Inline indica al compilador que debe insertar una copia del código de la función en el lugar donde se llama a la función. 
//* Esto puede mejorar el rendimiento de la aplicación, pero también aumenta el tamaño del código.
inline void delay(uint32_t ms)
{
    while (ms--)
    {
        __asm__ volatile ("nop");
    }
}

int main(void)
{
    system("@cls||clear");
    serialBegin(9600);
    pinMode(PIN1, OUTPUT);
    pinMode(PIN2, OUTPUT);
    pinMode(PIN3, INPUT);
    pinMode(PIN4, INPUT);

    digitalWrite(PIN1, HIGH);
    digitalWrite(PIN2, LOW);

    if (digitalRead(PIN3))
    {
        printf("Encender LED\n");
    }else{
        printf("Apagar LED\n");
    }

}

//* DESARROLLO DE LAS FUNCIONES

void pinMode(uint8_t pin, uint8_t mode)
{
    printf("El pin elegido es %u\n", pin);
    if (mode == OUTPUT)
    {
        printf("El modo elegido es OUTPUT\n");
    }else{
        printf("El modo elegido es INPUT\n");
    }
}

void digitalWrite(uint8_t pin, uint8_t value)
{
    printf("El pin elegido es %u\n", pin);
    if (value == HIGH)
    {
        printf("El pin fue puesto en HIGH\n");
    }else{
        printf("El pin fue puesto en LOW\n");
    }
}

bool digitalRead(uint8_t pin)
{
    printf("El pin elegido es %u\n", pin);
    return true;
}

void serialBegin(uint32_t baudRate)
{
    printf("El baudRate elegido es %u\n", baudRate);
}