# Find first Non - Repeated character

string = "Sougata paria"

for char in string:
    if char != " " and string.count(char) == 1:
        print(char)
        break
