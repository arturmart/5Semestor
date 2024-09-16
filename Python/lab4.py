print("num:")
x = int(input())


for i in range(1,x):
    flag = True
    for j in range(2,i):
        if(i%j==0):
            flag = False
    if(flag):
        print(i)

    

        
