#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

// double dot_product(double v[], double u[], int n);
int dot_product(int v[], int u[], int n);

char letras[5] = {'a', 'b', 'c', 'd', 'e'};
float voltajes[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
uint16_t sueldos[5] = {1000, 2000, 3000, 4000, 5000};

//* Matrices:
//* 1. Matriz de 3 filas y 4 columnas
//*         Columna0 Columna1 Columna2 Columna3
//* Fila0    1        2        3        4
//* Fila1    5        6        7        8
//* Fila2    9        10       11       12
int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

void main(void)
{
    uint8_t i;
    // Orden de los índices 0 1 2 3 4
    uint32_t arreglo[5] = {1, 2, 3, 4, 5};
    // double arreglo2[5] = {1.0, 1.0, 1.0, 1.0, 1.0};

    uint32_t *puntero;
    puntero = arreglo; //&arreglo

    for (i = 0; i < 5; i++)
    {
        printf("El valor del arreglo es: %u\n", *puntero);
        printf("La direccion del arreglo es: %X\n", puntero);
        puntero++;
    }
    int xx = 0;

    xx = dot_product(arreglo, arreglo, 5);

    printf("Producto punto %d\n", xx);
    printf("2³ = %f\n", pow(2, 3));

    for (i = 0; i < 5; i++)
    {
        printf("El valor del arreglo es: %d\n", arreglo[i]);
        printf("La direccion del arreglo es: %X\n", &arreglo[i]);
    }
    letras[0] = 'A';
    for (i = 0; i < 5; i++)
    {
        printf("El valor del arreglo es: %c\n", letras[i]);
        printf("La direccion del arreglo es: %X\n", &letras[i]);
    }
}

// double dot_product(double v[], double u[], int n)
// {
//     double result = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         result += v[i] * u[i];
//         printf("result %d\n", result);
//     }
//     return result;
// }
int dot_product(int v[], int u[], int n)
{
    int result = 0;
    printf("result %d\n", result);

    for (int i = 0; i < n; i++)
    {
        result += v[i] * u[i];
        printf("result %d\n", result);
    }
    return result;
}