# David Garcia Conditionals Old enough Py
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