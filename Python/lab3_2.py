arr = input("inp:")

arrInt = "?!@#$%^&*()_+}{][|\><,."


def findArr(char,arr):
    for i in arr:
        if (i == char):
            return True
    return False


def moveCharRight(crr, _arr):
    
    _arr =(_arr[:crr]+_arr[crr+1:]+_arr[crr])
    
    return _arr
    
i = 0
d = len(arr)
while( i <= d):
  
    if (arr[i].isupper()):
        arr = moveCharRight(i,arr)
        
        
        d-=1
    else:
        i+=1




print(arr)

arrNum = 0
arrAlpha = 0
arrSymbol = 0

for i in arr:
    if(i.isnumeric()):
        arrNum+=1
        
    elif(i.isalpha()):
        arrAlpha+=1
    elif(findArr(i,arrInt)):
        arrSymbol+=1

print(arrNum)
print(arrAlpha)
print(arrSymbol)

