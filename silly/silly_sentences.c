// David Garcia, Silly C 
#include <stdio.h>
#include <string.h>

int main() {
    char silly1[100], silly2[100], silly3[100];
    char story[500];
    printf("Enter a silly word (e.g., dog, car, pizza): ");
    fgets(silly1, sizeof(silly1), stdin);
    silly1[strcspn(silly1, "\n")] = 0;

    printf("Enter a silly word (e.g., funny, silly, purple): ");
    fgets(silly2, sizeof(silly2), stdin);
    silly2[strcspn(silly2, "\n")] = 0;

    printf("Enter a silly word (e.g., run, jump, eat): ");
    fgets(silly3, sizeof(silly3), stdin);
    silly3[strcspn(silly3, "\n")] = 0;
    snprintf(story, sizeof(story), "Once upon a time, a %s %s decided to %s all the way to the moon.", silly2, silly1, silly3);
    printf("%s\n", story);

    return 0;
}
