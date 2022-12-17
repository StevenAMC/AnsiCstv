#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int x = 10, y = 16;
int *const ptrConst = &x;

void main(void){
    ptrConst = &y;
    ptrConst++;
}