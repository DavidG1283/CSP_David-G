# David Garcia Name decorator Py
name = input("What is your name?:\n")

def print_dec_name(name):  
    dec_left = "<<"  
    dec_right = ">>"  
    decorated_name = dec_left + name + dec_right 
    print(decorated_name)  
  
def print_dec_name1(name):  
    dec_left1 = "=="  
    dec_right1 = "=="  
    decorated_name = dec_left1 + name + dec_right1 
    print(decorated_name)  
  

def print_dec_name2(name):  
    dec_left2 = "+="  
    dec_right2 = "=+"  
    decorated_name = dec_left2 + name + dec_right2
    print(decorated_name)  
  

def print_dec_name3(name):  
    dec_left3 = "\\"  
    dec_right3 = "//"  
    decorated_name = dec_left3 + name + dec_right3
    print(decorated_name)  
  

def print_dec_name4(name):  
    dec_left4 = "--"  
    dec_right4 = "--"  
    decorated_name = dec_left4 + name + dec_right4 
    print(decorated_name)  
  

def print_dec_name5(name):  
    dec_left5 = "[["  
    dec_right5 = "]]"  
    decorated_name = dec_left5 + name + dec_right5 
    print(decorated_name)  
  

def print_dec_name6(name):  
    dec_left6 = ":("  
    dec_right6 = ":)"  
    decorated_name = dec_left6 + name + dec_right6 
    print(decorated_name)  
  

def print_dec_name7(name):  
    dec_left7 = "$$"  
    dec_right7 = "&&"  
    decorated_name = dec_left7  + name  + dec_right7 
    print(decorated_name)  
  
print_dec_name(name)  
print_dec_name1(name)
print_dec_name2(name)
print_dec_name3(name)
print_dec_name4(name)
print_dec_name5(name)
print_dec_name6(name)
print_dec_name7(name)
