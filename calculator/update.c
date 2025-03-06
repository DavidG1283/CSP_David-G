// David Garcia Update C Calc
#include <stdio.h>
#include <string.h>

void getandcalculate(char *name, float *income, float *groceries, float *transportation, float *utilities, float *rent, float *total_expenses, float *income_left, float *rent_percent, float *trans_percent, float *groc_percent, float *uti_percent, float *savings);
void results(char *name, float total_expenses, float savings, float income_left, float rent_percent, float trans_percent, float groc_percent, float uti_percent, float rent, float transportation, float utilities, float groceries);

int main() {
    char name[100];
    float income, groceries, transportation, utilities, rent;
    float total_expenses, income_left;
    float rent_percent, trans_percent, groc_percent, uti_percent;
    
    getandcalculate(name, &income, &groceries, &transportation, &utilities, &rent, &total_expenses, &income_left, &rent_percent, &trans_percent, &groc_percent, &uti_percent, &savings);
    results(name, total_expenses, savings, income_left, rent_percent, trans_percent, groc_percent, uti_percent, rent, transportation, utilities, groceries);
    
    return 0;
}

void getandcalculate(char *name, float *income, float *groceries, float *transportation, float *utilities, float *rent, float *total_expenses, float *income_left, float *rent_percent, float *trans_percent, float *groc_percent, float *uti_percent, float *savings) {
    printf("What is your name?:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    
    printf("Hello %s, welcome to my program. In this program you are going to use a calculator, which will ask for your usual expenses and will calculate how much you should put into your savings account.\n", name);
    
    printf("What is your income? ");
    scanf("%f", income);
    
    printf("How much do you spend on groceries? ");
    scanf("%f", groceries);
    
    printf("How much do you spend on transportation? ");
    scanf("%f", transportation);
    
    printf("How much do you spend on utilities? ");
    scanf("%f", utilities);
    
    printf("How much do you spend on rent? ");
    scanf("%f", rent);

    *total_expenses = *groceries + *transportation + *utilities + *rent;
    *income_left = *income - *total_expenses;
    
    *rent_percent = (*rent / *income) * 100;
    *trans_percent = (*transportation / *income) * 100;
    *groc_percent = (*groceries / *income) * 100;
    *uti_percent = (*utilities / *income) * 100;
    *savings = *income * 0.1;
}

void display_results(char *name, float total_expenses, float savings, float income_left, float rent_percent, float trans_percent, float groc_percent, float uti_percent, float rent, float transportation, float utilities, float groceries) {
    printf("Your total expenses are %.2f\n", total_expenses);
    printf("Based on your income and how much you spend, you should save $%.1f or 10%% of your income.\n", savings);
    printf("You have $%.2f left to spend.\n", income_left);
    
    printf("Rent is %.2f%% of your income\n", rent_percent);
    printf("Transportation is %.2f%% of your income\n", trans_percent);
    printf("Groceries are %.2f%% of your income\n", groc_percent);
    printf("Utilities are %.2f%% of your income\n", uti_percent);
    
    printf("You spend $%.2f on Rent\n", rent);
    printf("You spend $%.2f on Transportation\n", transportation);
    printf("You spend $%.2f on Utilities\n", utilities);
    printf("You spend $%.2f on Groceries\n", groceries);
}
