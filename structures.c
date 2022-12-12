#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint16_t year; //* 2000-99
    uint8_t month;
    uint8_t monthDay;
    uint8_t weekDay;
    uint8_t hours;
    uint8_t minutes;
    uint8_t seconds;
} RTC_Data_t;

typedef struct
{
    char buffW[50];
    char buffR[520];
    uint16_t bytesRead;
    uint16_t bytesWritten;
} FILE_Data_t;

void main(void)
{
    RTC_Data_t RTC1;
    FILE_Data_t FileData;
    RTC1.hours = 12;
    RTC1.minutes = 34;
    printf("%u\n", RTC1.hours + RTC1.minutes);
}
