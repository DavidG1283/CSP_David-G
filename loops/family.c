// David Garcia, Family c
#include <stdio.h>
#include <strings.h>
int main(void){
char family[][20] = {"David", "Libsett", "Hector", "Jecel", "George"};
int mlength = sizeof(family)/sizeof(family[0]);
int m;
for(m=0;m<mlength;m++){
    printf("Hello %s\n", family[m]);
    //printf("Hello %s", family[2], family[3], family[4], family[5], family[6]);
}
    return 0;
}