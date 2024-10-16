print("num:")
x = int(input())
list = []


for i in range(1,x):
    flag = True
    
    for j in range(2,i):
        if(i%j==0):
            flag = False
            print(j, end =" ")
            
    if(flag):
        print("+", end =" ")
        list.append(i)

    print("(",i,")")

print(list)

    

        
