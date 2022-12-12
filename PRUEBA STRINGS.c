#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
uint8_t horas, minutos,segundos;
//MIN123
//MAX145
int valor  = 0;
char entrada[7] = "000000";

volatile char min[4] = "MIN";
char max[4] = "MAX";

char limiterec[4] ;
char numeroRecibido[4] ;

char cadenaprueba[7] = "MAX000";

///

int main(void)
{
    valor = strlen(limiterec);
    printf("valor: %i\n",valor);
    

    strncpy(limiterec,cadenaprueba,3);
    printf("Limite recibido: %s.\n",limiterec);

    strncpy(numeroRecibido,cadenaprueba+3,3);
    printf("Numero recibido: %s.\n",numeroRecibido);
    printf("\n\n");

    //valor = (strcmp(max,limiterec));
    valor = strlen(limiterec);
    printf("Valor de el tamaño de la cadena: %i\n",valor);
    valor = strcmp(max,limiterec);
    printf("Valor de strcmp: %i\n",valor);
    
    if (strcmp(max,limiterec) == 0)
    {
        printf("Si es igual\n");
    }
    else
    {
        printf("no es igual\n");
    }
    valor = atoi(limiterec);//(int)numeroRecibido;
    
    printf("Valor entero convertido: %i\n",valor);
}