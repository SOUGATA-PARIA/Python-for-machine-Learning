# List uniqueness checker

items = ["apple", "banana", "orange", "apple", "mango"]
douplicate_item = []
count = 0

for fruit in items:
    if items.count(fruit) > 1:
        douplicate_item.append(fruit)
        count += 1
if count == 0:
    print("The item list has no duplicate fruit")
else:
    print("The list has douplicate element")
    # print(list(set(douplicate_item)))
    
    #  set() method is used to remove the duplicate item from the list but its has a major drawback that the order of the items in the list is lost

    douplicate_item = list(set(douplicate_item))
    print(douplicate_item)

# one can use list comprehension to remove duplicate items
# list comprehension with enumerate() function is also useful
