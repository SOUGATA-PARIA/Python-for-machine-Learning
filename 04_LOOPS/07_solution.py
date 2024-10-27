# Validate input

while True:
    input_number = float(input("Please enter a number between 1 to 10 :"))
    if 1<= input_number <= 10:
        print("Thank you")
        break
    else:
        print("Please enter a valid number.")