#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
// TODO urarWriteString(cad)
// TODO: strcpy(destino,fuente) memset(cadena,character,n) strlen(cadena) strcmp(cad1,cad2)

// void UART_WriteStr(char cad[2] );
void UART_WriteStr(char *pStr);
uint32_t strLen(char *pStr);
void strCpy(char *pDstCad, char *pSrcCad);
bool strComp(char *pStr1, char *pStr2);
void memSet(char *pStr, char charact, uint16_t n);
// TODO: strstr(cad,sub_cad) strcat(destino,fuente) strtok(str,delim)...

char text[] = "Welcome to ansi C programming";
char text2[] = "sss";
uint32_t ln = 0;
char fullName[60];
char txt3[] = "Ha";
char txt4[] = "ha";
char pass[] = "84g851f";
void main(void)
{
    memSet(text, 'G', 5);
    printf("%s\n", text);
    memSet(text, 'G', sizeof(text));
    printf("%s\n", text);
    memSet(text, 0x00, sizeof(text));
    printf("%s\n", text);

    if (strComp(txt3, txt4))
    {
        printf("Las cadenas son iguales\n");
    }
    else
    {
        printf("Son diferentes\n");
    }

    if (strComp(pass, "484815"))
    {
        printf("Las pass son iguales\n");
    }
    else
    {
        printf("Son diferentes\n");
    }

    strCpy(fullName, "Benjamín Adrian");
    printf("%s\n", fullName);
    ln = strLen(text2);
    printf("Tamaño de string text2: %u\n", ln);
    UART_WriteStr("Hola UART");
}

void memSet(char *pStr, char charact, uint16_t n)
{
    for (uint32_t i = 0; i < n; i++)
    {
        if(*pStr == '\0') break;
        *pStr = charact;
        pStr++;
    }
}

bool strComp(char *pStr1, char *pStr2)
{
    bool res = false;
    while (1)
    {
        if (*pStr1 == '\0' || *pStr2 == '\0')
        {
            if (*pStr1 == *pStr2)
                res = true;
            break;
        }

        if (*pStr1 == *pStr2)
        {

            pStr1++;
            pStr2++;
        }
        else
        {
            break;
        }
    }
    return res;
}

void strCpy(char *pDstCad, char *pSrcCad)
{
    while (*pSrcCad != '\0')
    {
        *pDstCad = *pSrcCad;
        pSrcCad++;
        pDstCad++;
    }
}

uint32_t strLen(char *pStr)
{
    uint32_t cont = 0;
    while (*pStr != '\0')
    {
        cont++;
        pStr++;
    }
    return cont;
}

// void UART_WriteStr(char cad[2] ){
void UART_WriteStr(char *pStr)
{
    while (*pStr != '\0')
    {
        printf("%c", *pStr);
        pStr++;
    }
    printf("\n");
}