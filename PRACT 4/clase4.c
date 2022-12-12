#include <stdio.h>
#include <stdint.h>

//* Funciones
/*
uint8_t hasta 255;
uint16_t hasta 65535;
uint32_t hasta 4294967295;
uint64_t hasta 18446744073709551615;

int16_t hasta 32767;
int32_t hasta 2147483647;
int64_t hasta 9223372036854775807;

float 32 bits
double 64 bits
long double 128 bits

TIPS:
Paso 1  Definir prototipo con tipo de retorno y parámetros
Paso 2  Realizar el desarrollo de la funón, codificar la tarea a ejecutr por la funcion
Paso 3  Realizar el llamado de la función (el lugar donde la CPU ejecuta la funcion)
        El llamado se realiza dentro de la fun principal main
*/
//* Lugar para definir prototipos
void sumar(void);// Funcion sin retorno y sin valor de entrada
void dividir(uint16_t num1, uint16_t num2); //Función sin retorno y con parámetros
uint16_t multiplicar(void);
uint32_t potenciaNumero(uint32_t base,uint32_t exponente);

//*TODO: Variables Globales (Se pueden utilizar en cualquier parte del programa)
uint16_t datoA =10, datoB = 20, result1 = 0;




uint8_t miFunc(uint8_t a, uint8_t b){
    return a+b;
}

void main(void){
    printf("Hola 😼\n");
    printf("%u\n",miFunc(4,5));
    //return 0;
    printf("EL valor de resultado1 es %u\n",result1);
    sumar();
    printf("EL valor de resultado1 es %u\n",result1);
    dividir(100,10);

    //*CASO 1: Función con retorno y sin parámetros
    result1 = multiplicar();
    printf("EL valor de resultado1 es %u\n",result1);
    printf("Mutiplicar %u\n",multiplicar());
    //*CASO 2: Función con retorno y con parámetros
    printf("Potencia %u\n",potenciaNumero(10,5));

}

//* Zona de desarrollo de funciones

void sumar(void){
    //*Aquí van las sentencias o el bloque de sentencias para la funcion
    result1 = datoA +datoB;
}

void dividir(uint16_t num1, uint16_t num2){
    //*Variables locales
    uint16_t resultado2 = 0;
    resultado2 = num1/num2;
    printf("El resultado de la division es %u\n",resultado2);
}

uint16_t multiplicar(void){
    uint16_t x=0;//* Variable local
    x = datoA*datoB;
    return x;
}
uint32_t potenciaNumero(uint32_t base,uint32_t exponente){
    uint32_t resultado = 1;
    for (uint32_t i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
}