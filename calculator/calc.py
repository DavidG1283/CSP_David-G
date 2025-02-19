# David Garcia calculator Py
name = input("What is your name?:\n")
print("Hello",name, "welcome to my program. In this program you are going to use a calculator,which will ask for your usual expenses and will calculate how much you should put into your savings account")
income = float(input("What is your income? "))  
groceries = float(input("How much do you spend on groceries? "))  
transportation = float(input("How much do you spend on transportation? "))  
utilities = float(input("How much do you spend on utilities? "))  
rent = float(input("How much do you spend on rent? "))  
  

total_expenses = groceries + transportation + utilities + rent  

total_expenses1 = groceries + transportation + utilities + rent 

print("Your total expenses are", total_expenses1)

savings1 = income *.1
  
print(f"Based on you income and how much you spend, you should save ${savings1:.1f} or 10% of your income.")

income3 = groceries + transportation + utilities + rent  

income2 = income - income3 

print(f"You have ${income2:.2f} left to spend")


rentpercent = (rent / income) * 100 

transpercent = (transportation / income) * 100 

grocpercent = (groceries / income) * 100 

utipercent = (utilities / income) * 100 


print(f"Rent is {rentpercent:.2f}% of your income")
print(f"Transportation is {transpercent:.2f}% of your income")
print(f"groceries is {grocpercent:.2f}% of your income")
print(f"Utilities is {utipercent:.2f}% of your income")

print(f"You spend ${rent} in Rent")
print(f"You spend ${transportation} in Transportation")
print(f"You spend ${utilities} in Utilities")
print(f"You spend ${groceries} in Groceries")