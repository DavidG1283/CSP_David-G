# David Garcia Conditionals Old enough Py
name = input("What is you name\n")
age = int(input(("How old are you:\n")))

if name == "David":
    print("Hi David")
else:
    print(f"Hello {name}")

if age >= 17:
    print("You are able to get a drivers license")
if age >= 21:
    print("You are able to vote")
if age >= 15:
    print("You are able to get a learners permit")
if age == 0:
    print("bro was just born.")
elif age >4:
    print("You are able to go to school")