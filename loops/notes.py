# David Garcia Loops Notes Py

# What is a loop?
#   # A section of code that repeats multiple times  
#What are the two types of loops?
#FOR 
nums = [12,3,66,7,3,3,2]
for num in nums:
    print(num)

    #While

x = 0 
while x < 10:
    print(x)
    x+= 1
 
#What is iteration

#What are lists? 
nums = [1,2,3,4,5,6,7,6]
siblings = ["Alex", "David", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Haily"]
print(nums)
print(siblings[3])

siblings[7] = "Jake"
siblings.pop(5)
siblings.insert(1, "Jayshree")
siblings.insert(2, ["Joe", "Noah", "Lizz"])
print(siblings)

#How do you make lists in python? 

#How do you make for loops in python? 
for sibling in siblings:
    print(sibling)

for x in range(0,101, 20):
    print(x)
#How do you make while loops in python?
import random
x = 1 #variable to keep count of my iteration
goose = random.randint(1,20)
while x <= 20:
    if x == goose:
        print("goose")
        break #tells loop to stop
    else:
        print("duck")
    print("Duck")
    x+= 1 

#continue moves on to the next iteration without finishing
#How do you make lists in C?
#How do you make for loops in C?
#How do you make while loops in C?