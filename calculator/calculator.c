// David Garcia, Calculator C
#include <stdio.h>
#include <math.h>

float income;

float rent;

float transportation;

float groceries;

float utilities;

float save;

float rentpercent;

float transpercent;

float grocpercent;

float utilpercent;

int main(void){

printf("Hello user, welcome to my calculator, here you will calculate how much percentage you should put into saving and a lot more, HAVE FUN!!!!!!!!!\n");

printf("What is your income?:\n");

scanf("%f", &income);

printf("What is your rent?:\n");

scanf("%f", &rent);

printf("What is your Trans?:\n");

scanf("%f", &transportation);

printf("What is your Gro?:\n");

scanf("%f", &groceries);

printf("What is your Uti?:\n");

scanf("%f", &utilities);

save = income*.1;

printf("You should save 10 percent of your income which is\n");
printf("%.2f", save);


rentpercent = rent / income * 100;
transpercent = transportation / income * 100;
grocpercent = groceries / income * 100;
utilpercent = utilities / income * 100;

printf("Rent is %s of your rent", rentpercent);
    return 0;
}