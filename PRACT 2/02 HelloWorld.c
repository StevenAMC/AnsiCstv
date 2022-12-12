// Zona para incluir archivo de cabecera
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
// Zona para definir variables globales
//Tipos nativos en microcontroladores.
int numero1= 200;   //16 bits entero con signo     
float temp = 26.56; //32 bits -> Valor de punto lotante (presicion simple)
double datox = 25.4567823; //64bits -> Valor de punto lotante (presicion doble)
char letra = 'z';
//  operador unario + ó -

//Tipos de datos estandares(<stdint.h>):
int8_t valorx = -20;    //entero con signo de 8 bits.
uint8_t valory = 255;   //Entero con signo de 8 bits.
int16_t dato1 = -1200;  //Entero con signo de 16 bits.
uint16_t dato2 = 2450;  //Entero sin signo de 16 bits.
/*int32_t 
uint32_t
int64_t
uint64_t */
bool flag = false;// = 100 se cambia or 1

// Zona parala funcion main(Punto de arranque del programa)


int main(void)
{
    printf("Valor de numero1: %d\n",numero1);
    printf("Valor de temp: %.2f\n",temp);
    printf("Valor de datox: %.7f\n",datox);
    printf("Valor de letra: %.2c\n",letra);
    printf("Valor de valorx: %d\n",valorx); // o %i
    printf("Valor de valory: %u\n",valory);
    printf("Valor de valorx: %i\n",dato1); 
    printf("Valor de valory: %u\n",dato2);
    printf("Valor de flag: %i\n",flag);
}