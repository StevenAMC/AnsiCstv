#include <stdio.h>
#include "cJSON.h"
#include <stdint.h>
#include "ga.h"

uint8_t ga = 12;

void main(void){
cJSON *jsonObj = cJSON_CreateObject();
cJSON_AddStringToObject(jsonObj,"sensor","DHT22");
cJSON_AddNumberToObject(jsonObj,"tiempo",123059);
cJSON *dataArray = cJSON_AddArrayToObject(jsonObj,"datos");
cJSON_AddItemToArray(dataArray,cJSON_CreateNumber(777));
cJSON_AddItemToArray(dataArray,cJSON_CreateNumber(999));






char *jso_string = cJSON_Print(jsonObj);
printf("EL JSONstr es: \n%s\n",jso_string);



cJSON *arr = cJSON_GetObjectItem(jsonObj,"datos");
char *jso_string2 = cJSON_Print(arr);
printf("EL JSONstr es: \n%s\n",jso_string2);

cJSON_Delete(jsonObj);
cJSON_free(jso_string);
hacerGa(&ga);
printf("%u\n",ga);


}

