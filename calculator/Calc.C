// David Garcia calculator c 

#include <stdio.h>
#include <math.h>

int main() {
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
    float total_expenses;
    float remaining_income;

    printf("Hello user, welcome to my calculator, here you will calculate how much percentage you should put into saving and a lot more, HAVE FUN!!!!!!!!!\n");
    
    printf("What is your monthly income (do not include dollar sign, only the number)?:\n");
    scanf("%f", &income);
    
    printf("How much do you spend on rent monthly (do not include dollar sign, only the number)?:\n");
    scanf("%f", &rent);
    
    printf("How much do you spend on transportation monthly (do not include dollar sign, only the number)?:\n");
    scanf("%f", &transportation);
    
    printf("How much do you spend on groceries monthly (do not include dollar sign, only the number)?:\n");
    scanf("%f", &groceries);
    
    printf("How much do you spend on utilities monthly (do not include dollar sign, only the number)?:\n");
    scanf("%f", &utilities);
    
    total_expenses = rent + transportation + groceries + utilities;

    remaining_income = income - total_expenses;

    save = remaining_income * 0.1;
    
    printf("The amount of money left that you have to spend on your stuff is $%.2f\n", remaining_income);
    printf("You should save 10 percent of the money left after paying your expenses, which is $%.2f\n", save);

    rentpercent = (rent / income) * 100;
    transpercent = (transportation / income) * 100;
    grocpercent = (groceries / income) * 100;
    utilpercent = (utilities / income) * 100;

    printf("Rent is %.2f%% of your income\n", rentpercent);
    printf("Transportation is %.2f%% of your income\n", transpercent);
    printf("Groceries is %.2f%% of your income\n", grocpercent);
    printf("Utilities is %.2f%% of your income\n", utilpercent);

    printf("You spend $%.2f on Rent\n", rent);
    printf("You spend $%.2f on Transportation\n", transportation);
    printf("You spend $%.2f on Utilities\n", utilities);
    printf("You spend $%.2f on Groceries\n", groceries);

    return 0;
}
