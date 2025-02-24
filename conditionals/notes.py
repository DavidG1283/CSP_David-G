# David Garcia Conditionals Notes Py
name = input("What is you name\n")
#1. What puts something inside of the “if” statement?
#the tab at the front


if name == "David":
    print("Hi David")
else:
    print(f"Hello{name}")




#2. What do if statements do?
#Checks a condition and if it is true it will do a thing


if name == "David":  #<-- condition
    print("Hi David")  #<-- this is what it does if its true


#3. What are boolean statements?
#a true or a false statement

#4. What do else statements do?
if name == "David":
    print("Hi David")
else: #<-- if the boolean is false, then else executes
    print(f"Hello{name}")

#5. What kind of statement do you use if you have more than 2 needed outcomes?
num = int(input(("say a number:\n")))
num = 2
if num == 0: #<-- always starts the conditional
    print("There are none.")
elif num == 1:  #everything in between is an elif
    print("There is one.")
elif num <4:
    print("There is a couple")
elif num <10:
    print("There is a couple")
else:  # else always ends the ocnditional
    print("There are many")


#6. What do each of the different symbols mean in conditionals?
#< Less than

#> Greater than

#<= Less than or equal to

#>= Greater than or equal to

#== Equals to 

#=== Does not exist in python

#! Not

#7. What are the 3 logical operators?

if num <10 and num >5: #"and" means both booleans are true
    print("This is a big single digit number")

elif num <10 or num >5: #"or" means one booleans must be true
    print("This is a single digit number")

elif not num  <10: #"not" changes to check if false
    print("This is not a big digit number")
#8. What are logical operators for?
#Allows the code to handle more difficult questions... increases complexity

#9. What does a nested conditional statement do?
if num <10:
    if num == 8:
        print("This prints 8")
    else:
        print("The number is less than 10")
else: 
    print("The number is bigger than 10")

#How do you write an if statement in C?
#How do you write else statements in C?
#How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?
