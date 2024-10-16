
print("num1:")
x1 = input()

print("tool(+,-,*,/):")
tool = chr(input())


print("num2:")
x2 = input()

rusult = 0

if tool == '+':
    result = int(x1)+int(x2)

print(x1," ",tool," ",x2," = ",rusult)
