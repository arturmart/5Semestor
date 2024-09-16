

for i in range(16):
    if(i < 8):
        print("* "*8, end ="")
    else:
        if(i % 2):
            print("//"*8, end ="")
    if(i % 2):
            print("//"*16, end ="")
    print()




