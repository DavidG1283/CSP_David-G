# David Garcia Conditionals Old enough Py
age = int(input("How old are you:\n"))

if age >= 21:
    print("You can vote, go to schoool, get a learners permit, and a drivers license.")
elif age >= 16 and age <= 21:
    print("You can get a driver's license, get a learners permit, and go to school")
elif age >= 15 and age < 16:
    print("You can get a learner's permit, and go to school")
elif age >= 5 and age <= 1:
    print("You can go to school.")
elif age == 0:
    print("bro was just born")
else:
    print("You are too young.")
