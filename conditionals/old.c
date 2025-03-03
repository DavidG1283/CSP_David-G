<<<<<<< HEAD
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
=======
// David Garcia  C old enough
#include <stdio.h>

int main(void) {
    int age;

    printf("How old are you:\n");
    scanf("%d", &age);

    if (age >= 21) {
        printf("You can vote, go to school, get a learner's permit, and a driver's license.\n");
    } else if (age >= 16 && age <= 21) {
        printf("You can get a driver's license, get a learner's permit, and go to school.\n");
    } else if (age >= 15 && age < 16) {
        printf("You can get a learner's permit, and go to school.\n");
    } else if (age >= 5 && age <= 14) {
        printf("You can go to school.\n");
    } else if (age == 0) {
        printf("Bro was just born.\n");
    } else {
        printf("You are too young.\n");
    }

    return 0;
}
>>>>>>> b3e1d7a211c4930630db9c8c006f62993033595e
