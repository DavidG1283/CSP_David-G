# David Garcia Financial Calculator Python

name = input("What is your name: ")

print("Hello", name, "Welcome to this program\n" "What you will see and fill out is a calculator to see how much money are your expenses like Utilities or Groseries\n" "Have fun!")
income = input("What is your monthly income?:")
rent = input("How much do you pay for rent?:")
utilities = input("How ,uch do you pay in utilities?:")
groseries = input("How much do you spend in groseries in a month?:")
transportation = input("How much money do you spend in bus passes or your personal car?:")
percent_transport = input(transportation)
print(transportation / income *100)
print(rent / income *100)
print(utilities / income *100)
print(groseries / income *100)

