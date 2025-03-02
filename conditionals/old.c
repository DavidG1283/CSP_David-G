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
