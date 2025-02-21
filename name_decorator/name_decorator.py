# David Garcia Name decorator Py
name = input("What is your name?:\n")

decoratedname1 = f"<<{name}>>"
decoratedname2 = f"##{name}##"
decoratedname3 = f"\\{name}//"
decoratedname4 = f"$$ {name} $$"
decoratedname5 = f"%%{name}%%"
decoratedname6 = f"@@{name}@@"
decoratedname7 = f"^^{name}^^"

# Concatenate the decorated names in a single output
alldecoratednames = decoratedname1 + " " + decoratedname2 + " " + decoratedname3 + " " + decoratedname4 + " " + decoratedname5 + " " + decoratedname6 + " " + decoratedname7

print(alldecoratednames)
print("Thanks for using this program to make your name a little bit silly by decorating it, I hope yu had fun!!!")
