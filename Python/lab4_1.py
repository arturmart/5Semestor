kort1 = (1,2,3,4,5,6,7,8,9,10)





def kortFirstEnd(kort):
    kort2 = (kort[len(kort)-1], *kort[1:len(kort)-2] ,kort[0])

    return (kort2)

print(kortFirstEnd(kort1))

