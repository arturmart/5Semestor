brr1 = {"A": 1, "B" : 2, "C" : 3 , "D" : 3, "E" : 2, "F" : 3, "G" : 3}
brr2 = {}


print(brr1.values())
crr =0

for i in brr1.values():
    cnt =1
    
    if not i in brr2:
        for j in list(brr1.values())[crr+1:]:
            if i == j:
                cnt +=1
        
        brr2.update({i : cnt})
    crr +=1

    
        
        
print(brr2)



#print(brr)
