# Function to check if a string contains any integer
def contains_integer(s):
    for char in s:
        if char.isdigit():
            return True
    return False

# Get multiple strings from the user
strings = input("Enter multiple strings separated by commas: ").split(',')

# Check each string
for s in strings:
    s = s.strip()  # Remove extra spaces
    if contains_integer(s):
        print(f"'{s}' contains an integer.")
    else:
        print(f"'{s}' does NOT contain an integer.")
