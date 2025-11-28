# To check if the number entered is even or odd
num = int(input("Enter a number:"))
if num >= 0:
 if num % 2 == 0:
    print("Even")
 elif num % 2 != 0:
    print("Odd")
 else:
    print("Zero")
else:
   print("Invalid input")