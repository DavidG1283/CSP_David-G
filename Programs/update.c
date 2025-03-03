// David Garcia Update Hello world C
#include <stdio.h>
#include <string.h>
void add(char name1[], char name2[], char name3[], char name4[], char name5[]) {
    // Print a greeting with all 5 names
    printf("Hello %s, %s, %s, %s, %s, welcome!!\n", name1, name2, name3, name4, name5);
}

int main (void) {
    char name[100], school[100];
    char name1[100], name2[100], name3[100], name4[100], name5[100];

    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin); // To get the user's name (including spaces)
    
    printf("What school do you go to?: ");
    fgets(school, sizeof(school), stdin); // To get the school name

    name[strcspn(name, "\n")] = 0;
    school[strcspn(school, "\n")] = 0;

    printf("Hello %s, I'm glad you are a %s student.\n", name, school);
    printf("Welcome to my program!\n");

    printf("Please enter name 1: ");
    fgets(name1, sizeof(name1), stdin);
    printf("Please enter name 2: ");
    fgets(name2, sizeof(name2), stdin);
    printf("Please enter name 3: ");
    fgets(name3, sizeof(name3), stdin);
    printf("Please enter name 4: ");
    fgets(name4, sizeof(name4), stdin);
    printf("Please enter name 5: ");
    fgets(name5, sizeof(name5), stdin);

    name1[strcspn(name1, "\n")] = 0;
    name2[strcspn(name2, "\n")] = 0;
    name3[strcspn(name3, "\n")] = 0;
    name4[strcspn(name4, "\n")] = 0;
    name5[strcspn(name5, "\n")] = 0;

    add(name1, name2, name3, name4, name5);

    return 0;
}
