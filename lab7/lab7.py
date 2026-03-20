import random

def fun1(arr:list[int]) -> list[int]:
    maxim : int = max(arr)
    for i in range(len(arr)):
        if 10 <= arr[i] <= 99:
            arr[i] = maxim
    return arr




sizeR = int(input("Enter size of first array: "))
arrR : list[int] = [random.randint(10, 300) for i in range(sizeR)]
arrP : list[int] = []
print("Random array: ", arrR)
print("Changed array: ", fun1(arrR))
sizeP = int(input("\nEnter size of second array: "))
for i in range(sizeP):
    num = int(input("Enter num: "))
    while num < 10 or num > 300:
        num = int(input("Num out of range. Enter again: "))
    arrP.append(num)   
print("Your array: ", arrP)
print("Changed array: ", fun1(arrP))