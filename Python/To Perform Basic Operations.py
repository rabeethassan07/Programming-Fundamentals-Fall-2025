# To Perform Basic Operations
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
op = int(input("Enter operation code (1, 2, or 3): "))

if op == 1:
    print(a + b)
elif  op == 2:
    print(a - b)
elif op == 3:
    print(a * b)
else :
    print("Invalid Input")