# David Garcia Conditionals Old enough Py
<<<<<<< HEAD
age = int(input(("How old are you:\n")))
if age >= 16:
    print("You are able to get a drivers license")
elif age >= 20:
    print("You are able to go to school, you are able to vote, you are able to get a learners permit, and you are able to get a drivers license")
elif age== 15:
    print("You are able to get a learners permit")
elif age == 0:
    print("bro was just born.")
elif age >= 5:
    print("You are able to go to school")
else:
    print("You are not old enough to do anything")
=======
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
>>>>>>> b3e1d7a211c4930630db9c8c006f62993033595e
