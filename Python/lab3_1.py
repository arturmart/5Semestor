arr = "hello world"
#input(arr)
varA = "aeiouh"
varB = "bcdfgjklmnpqrstvwxz"

def findArr(char,arr):
    for i in arr:
        if (i == char):
            return True
    return False

A = 0
B = 0

arr.lower()
for i in arr:
    if(findArr(i,varA)):
        A+=1
    if(findArr(i,varB)):
        B+=1

    
print(A)
print(B)
