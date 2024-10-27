marks = 185

if marks >= 101:
    print("Please verify you grade again")
    exit()

if marks >= 90:
    grade = "A"

elif marks >= 80:
    grade = "B"

elif marks >= 70:
    grade = "c"
elif marks >= 60:
    grade = "D"

else:
    grage = "F"

print("Grade ",grade)