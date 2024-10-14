brr1 = {"A": 1, "B" : 2, "C" : 3}
brr2 = {"B": 4, "D" : 5, "E" : 6}


print()

    
for i in brr1:
    print(i ," " , brr1[i])
    
    if(brr2.get(i)):
        d = brr1[i]+brr2[i]
        brr2.update(i, d)
    if(not brr2.get(i)):
        brr2[i]= brr1[i]


print(brr2)
