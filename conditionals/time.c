// David Garcia notes time c
#include <stdio.h>
#include <time.h>

int main(void){
    // Time since Jan 1 1970
    time_t seconds;

    seconds = time(NULL);

    //printf("Seconds since Jan 1 1970 = %d\n", seconds);

    //Current time
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    //printf("current time and date is %s\n", asctime(timeinfo));
    
    //Current hour
    time_t now = time(NULL);

    struct tm * tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;  // military time
    printf("%d\n", hour);

    if(hour <12);
    printf("Good morning");
    return 0;
}