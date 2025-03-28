// David Garcia Update C


# include <stdio.h>
# include <math.h>

float income;
float rent;
float utilities;
float groceries;
float transport;
float savings;
float spending;

float userInputs(char expense[20]) {
    float userInput;
    printf("How much is your monthly %s?:\n", expense);
    scanf("%f", &userInput);
    return userInput;
}
void info(float cost, float income, char category[20]) {
    float percent = cost / income * 100;
    printf("Your monthly %s is $%f, which is %f%% of your income.\n", category, cost, percent);
}
int main(void) {
     
    printf("\nWelcome to the Monthly Financial Calculator.\nThis program will ask you for your monthly income and expeneses, then calculate what percent each expense takes of your income, as well as how much money you should save and how much you have left over to spend.\n");

    income = userInputs("income");
    rent = userInputs("rent/mortage");
    utilities = userInputs("utilites cost");
    groceries = userInputs("groceries cost");
    transport = userInputs("transportation cost");

    savings = income * .1;

    spending = income - savings - rent - utilities -  groceries - transport;

    // Call function "info" for each category of expense.
    info(rent, income, "rent/mortage");
    info(utilities, income, "utilities cost");
    info(groceries, income, "groceries cost");
    info(transport, income, "transportation cost");
    info(savings, income, "savings");
    info(spending, income, "spending");

    return 0;
}
