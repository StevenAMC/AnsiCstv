// Archivos de cabecera (Bibliotecas -> Librerías)
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
// Zona para definir variables globales
uint16_t datoA = 12;
uint16_t datoB = 6;
uint16_t result1,result2,result3,result4,result5;

uint8_t contador = 0;
uint8_t PORTB = 0B00000010;
uint8_t TRISC = 0xFF;
// Zona parala funcion main(Punto de arranque del programa)


int main(void)
{
    //Ejemplo 01:
    result1 = datoA*datoB;
    result2 = datoA/datoB;
    result3 = datoA%datoB;
    result4 = datoA-datoB;
    result5 = datoA+datoB;
    printf("El resultado de la multiplicación es: %u\n",result1);
    printf("El resultado de la división es:       %u\n",result2);
    printf("El resultado del módulo es:           %u\n",result3);
    printf("El resultado de la substracción es:   %u\n",result4);
    printf("El resultado de la suma es:           %u\n",result5);
    
    //Ejemplo 02:

    //Incremento
    contador++;//contador = contador +1
    printf("Elcontador es  %u\n",contador);
    contador++;//contador = contador +1
    printf("Elcontador es  %u\n",contador);
    contador++;//contador = contador +1
    printf("Elcontador es  %u\n",contador);
    contador++;//contador = contador +1
    printf("Elcontador es  %u\n",contador);
    ///Decremento
    contador--;//contador = contador -1
    printf("Elcontador es  %u\n",contador);

    //Ejemplo 03 Operadores de asignación comuesta.
    contador = 50;
    contador += 6;// Contador = contador +6
    printf("Elcontador es  %u\n",contador);
    contador -= 4;// Contador = contador -4
    printf("Elcontador es  %u\n",contador);
    contador *= 2;// Contador = contador *2
    printf("Elcontador es  %u\n",contador);
    printf("Hola gatos\n");
    printf("ga\n");
    printf("El valor del registro PORTB: %u\n",PORTB);
    printf("El valor del registro TRISC: %u\n",TRISC);
}