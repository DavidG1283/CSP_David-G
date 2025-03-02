#David Garcia Updtade Calc Py
name = input("What is your name?:\n")
print(f"Hello {name}, welcome to my program. In this program you are going to use a calculator, which will ask for your usual expenses and will calculate how much you should put into your savings account.")

income = float(input("What is your income? "))  
groceries = float(input("How much do you spend on groceries? "))  
transportation = float(input("How much do you spend on transportation? "))  
utilities = float(input("How much do you spend on utilities? "))  
rent = float(input("How much do you spend on rent? "))  

total_expenses = groceries + transportation + utilities + rent  
print("Your total expenses are", total_expenses)

savings = income * 0.1
print(f"Based on your income and how much you spend, you should save ${savings:.1f} or 10% of your income.")

total_expenses1 = groceries + transportation + utilities + rent
income_left = income - total_expenses1
print(f"You have ${income_left:.2f} left to spend.")

rent_percent = (rent / income) * 100
trans_percent = (transportation / income) * 100
groc_percent = (groceries / income) * 100
uti_percent = (utilities / income) * 100

print(f"Rent is {rent_percent:.2f}% of your income")
print(f"Transportation is {trans_percent:.2f}% of your income")
print(f"Groceries are {groc_percent:.2f}% of your income")
print(f"Utilities are {uti_percent:.2f}% of your income")

print(f"You spend ${rent} on Rent")
print(f"You spend ${transportation} on Transportation")
print(f"You spend ${utilities} on Utilities")
print(f"You spend ${groceries} on Groceries")
