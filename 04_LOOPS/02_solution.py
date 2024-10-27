number = int(input("Please enter the number : "))

num = 0
sum = 0
while (num < number):
    if num % 2 == 0:
        sum += num
    num += 2

print("The sum of the even numbers smaller than given number is : ",sum)

# another method to solve using range function

sum1 = 0
for i in range(number):
    if i%2 == 0:
        sum1 += i
print("The sum of the even numbers is : ",sum1)