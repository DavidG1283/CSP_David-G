// David Garcia, Templates C 
#include <stdio.h>
#include <string.h> 
#include <math.h>
float age;

int main(void){
age = int(input(("How old are you:\n")));
    scanf("%d", &age);
    printf("Hello %s welcome to my program!", name);

if (age >= 17){
    printf("You are able to get a drivers license");
}else if (age >= 21){
    printf("You are able to vote");
}else if (age >= 15){
    printf("You are able to get a learners permit");
}else if (age == 0){
    printf("bro was just born.");
}else if (age >4){
    printf("You are able to go to school");
}else{
    printf("You are so young to do something");
}
    return 0;
}