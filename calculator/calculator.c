// David Garcia, Calculator C
#include <stdio.h>
#include <math.h>

float income;
float rent;
float transportation;
float groceries;
float utilities;
int main(void){
printf("Hello user, welcome to my calculator, here you will calculate how much percentage you should put into saving and a lot more, HAVE FUN!!!!!!!!!");
printf("what is your income?:\n");
scanf("%f", income);

float save = income *.1;

printf("What is your rent?:\n");
scanf("%f", rent);

printf("What is your Trans?:\n");
scanf("%f", transportation);

printf("What is your Gro?:\n");
scanf("%f", groceries);

printf("What is your Uti?:\n");
scanf("%f", utilities);

    return 0;
}