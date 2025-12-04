# Initialize the greatest number as None
greatest = None

while True:
    user_input = input("Enter a number (or type 'done' to finish): ")
    
    if user_input.lower() == 'done':
        break  # Stop asking for more numbers
    
    # Convert input to integer
    number = int(user_input)
    
    # Update greatest if needed
    if greatest is None or number > greatest:
        greatest = number

# Print the greatest number
if greatest is not None:
    print("The greatest number is:", greatest)
else:
    print("No numbers were entered.")