print("***********Welcome to Your Calculator***************")
n1 = int(input("Enter first number : "))
opp = input("Enter the operation (+, -, *, /, %, **) : ")
n2 = int(input("Enter second number : "))
if opp == '+':
    add = n1 + n2
    print(f"Addition of {n1} and {n2} is {add}")
    print("-----------Cool-----------")
elif opp == '-':
    sub = n1 - n2
    print(f"Substraction of {n1} and {n2} is {sub}")
    print("-----------Cool-----------")
elif opp == '*':
    mul = n1 * n2
    print(f"Multiplication of {n1} and {n2} is {mul}")
    print("-----------Cool-----------")
elif opp == '/':
    div = n1 / n2
    print(f"Division of {n1} and {n2} is {div}")
    print("-----------Cool-----------")
elif opp == '%':
    mod = n1 % n2
    print(f"Modulus of {n1} and {n2} is {mod}")
    print("-----------Cool-----------")
elif opp == '**':
    expo = n1 ** n2
    print(f"Exponential of {n1} w.r.t {n2} is {expo}")
    print("-----------Cool-----------")
elif opp == '//':
    flo = n1 // n2
    print(f"Float of {n1} and {n2} is {flo}")
    print("-----------Cool-----------")
else:
    print("Invalid Operation!")
print("*********Thank You ! For using this calculator********")
