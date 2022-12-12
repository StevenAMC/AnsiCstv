#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


//* String (\o-> caracter que indica el final de la cadena)
//* [cantidad]
char letras[6] = {'h','o','l','a','s','\0'}; //* Debe ser tamaño 5
char cad[]="Especialización ANSIC";
char cad2[60]="Ingeniería electrónica";
uint8_t arr2[] = {1,2};
uint16_t tam = 0;

void main(void){
    printf("%u\n",letras[6]);
    printf("%s\n",letras);
    printf("%s\n",cad);
    printf("%s\n",cad2);
    printf("%u\n",sizeof(letras));
    printf("%u\n",sizeof(arr2));
}