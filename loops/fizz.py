# David Garcia FizzBuzz Py
x = 1
while x < 50:
    print(x)
    x+=1
    if x % 3 == 0 and x % 5 == 0:  
        print("FizzBuzz")  
    elif x % 3 == 0:  
        print("Fizz")  
    else:
        x % 5 == 0
        print("Buzz") 