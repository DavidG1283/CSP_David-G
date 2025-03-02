// David Garcia Update C Calc

#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    float income, groceries, transportation, utilities, rent;
    
    // Getting the user's name
    printf("What is your name?:\n");
    fgets(name, sizeof(name), stdin);  // To get the user's name (including spaces)
    
    // Removing newline character from input (fgets leaves the newline)
    name[strcspn(name, "\n")] = 0;

    printf("Hello %s, welcome to my program. In this program you are going to use a calculator, which will ask for your usual expenses and will calculate how much you should put into your savings account.\n", name);

    // Getting income and expenses from the user
    printf("What is your income? ");
    scanf("%f", &income);
    
    printf("How much do you spend on groceries? ");
    scanf("%f", &groceries);
    
    printf("How much do you spend on transportation? ");
    scanf("%f", &transportation);
    
    printf("How much do you spend on utilities? ");
    scanf("%f", &utilities);
    
    printf("How much do you spend on rent? ");
    scanf("%f", &rent);

    // Calculating total expenses
    float total_expenses = groceries + transportation + utilities + rent;
    printf("Your total expenses are %.2f\n", total_expenses);

    // Calculating savings (10% of income)
    float savings = income * 0.1;
    printf("Based on your income and how much you spend, you should save $%.1f or 10%% of your income.\n", savings);

    // Calculating remaining income
    float income_left = income - total_expenses;
    printf("You have $%.2f left to spend.\n", income_left);

    // Calculating the percentage of income spent on each category
    float rent_percent = (rent / income) * 100;
    float trans_percent = (transportation / income) * 100;
    float groc_percent = (groceries / income) * 100;
    float uti_percent = (utilities / income) * 100;

    // Displaying percentages
    printf("Rent is %.2f%% of your income\n", rent_percent);
    printf("Transportation is %.2f%% of your income\n", trans_percent);
    printf("Groceries are %.2f%% of your income\n", groc_percent);
    printf("Utilities are %.2f%% of your income\n", uti_percent);

    // Displaying the actual expenses
    printf("You spend $%.2f on Rent\n", rent);
    printf("You spend $%.2f on Transportation\n", transportation);
    printf("You spend $%.2f on Utilities\n", utilities);
    printf("You spend $%.2f on Groceries\n", groceries);

    return 0;
}
