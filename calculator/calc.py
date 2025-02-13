# David Garcia calculator Py
name = input("what is your name?:\n")
print("Hello",name, "welcome to my program. In this program you are going to use a calculator,which will ask for your usual expenses and will calculate how much you should put into your savings account")
income = float(input("What is your income? "))  
groceries = float(input("How much do you spend on groceries? "))  
transportation = float(input("How much do you spend on transportation? "))  
utilities = float(input("How much do you spend on utilities? "))  
rent = float(input("How much do you spend on rent? "))  
  

total_expenses = groceries + transportation + utilities + rent  

total_expenses1 = groceries + transportation + utilities + rent 

print("Your total expenses are", total_expenses1)

savings = income - total_expenses  

savings_percentage = (savings / income) * 100  
  
print(f"You should save {savings_percentage:.2f}% of your income.")  

print(f"You have {amoun}"