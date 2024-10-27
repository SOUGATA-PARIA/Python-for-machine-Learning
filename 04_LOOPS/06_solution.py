# Factorial Calculator
while True:
    number = int(input("Please provide the integer number : "))
    if number < 0:
        print("please enter the valid integer number ")
    else:
        break

factorial = 1
for num in range(1,number + 1):
    factorial = factorial * num

print("The factorial of the given number is : ",factorial)

# solution by Hitesh


# number = 5
# factorial = 1

# while number > 0:
#     # factorial = factorial * number
#     # number = number - 1
#     factorial *= number
#     number -= 1

# print("Factorial: ", factorial)