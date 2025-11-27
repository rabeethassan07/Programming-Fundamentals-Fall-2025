# Multiplication Table of a Number entered by User
num = int(input("Enter a number: "))

for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")