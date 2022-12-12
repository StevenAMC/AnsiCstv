#include <stdio.h>
#include <stdint.h>
//* RGB colors

int main (void){

for (uint8_t R = 0; R <= 255; R++)
{
    if(R==255) break;
    for (uint8_t G = 0; G <= 255; G++)
    {
        if(G==255) break;
        for (uint8_t B = 0; B <= 255; B++)
        {
            printf("R = %03u; G = %03u; B = %03u\r", R, G, B);
            fflush(stdout);
            usleep(10000);
            if(B==255) break;
        }
    }
}
}