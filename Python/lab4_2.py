brr1 = {"A": 1, "B" : 2, "C" : 3}
brr2 = {"B": 4, "D" : 5, "E" : 6}


print()

print(brr1.keys() | brr2.keys())
print(brr1.update(brr2))


print(brr1)
