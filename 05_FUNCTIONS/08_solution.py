def print_kwargs(**kwargs):
    for key,value in kwargs.items():
        print(f"{key} : {value}")

print_kwargs(name = "Sougata", power = "focus")
print_kwargs(name = "Vikram")
print_kwargs(name = "Ved", power = "cillebacy", enemy = "monkey mind")
