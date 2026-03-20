import random

def fun1(arr: list[int]) -> list[int]:
    maxim: int = max(arr)
    for i in range(len(arr)):
        if 10 <= arr[i] <= 99:
            arr[i] = maxim
    return arr


def fun2(strArr: list[str], letter : str) -> list[str]:
    res: str = ''
    for i in strArr:
        if letter in i:
           res += i[0]
    strArr.append(res)
    return strArr

if __name__ == '__main__':
    todo: int = int(input("Enter the task (1 or 2): "))
    if todo == 1:
        sizeR: int = int(input("\nEnter size of first array: "))
        arrR: list[int] = [random.randint(10, 300) for i in range(sizeR)]
        arrP: list[int] = []
        print("Random array: ", arrR)
        print("Changed array: ", fun1(arrR))
        sizeP = int(input("\nEnter size of second array: "))
        for i in range(sizeP):
            num: int = int(input("Enter num: "))
            while num < 10 or num > 300:
                num = int(input("Num out of range. Enter again: "))
            arrP.append(num)   
        print("Your array: ", arrP)
        print("Changed array: ", fun1(arrP))

    elif todo == 2:
        stroka: str = (input("\nEnter a string: "))
        letter: str = (input("Enter a letter: "))
        strArr: list[str] = stroka.split()
        fun2(strArr, letter)
        print("\nYour string: ", stroka)
        print("New string: ", " ".join(strArr))    
    else: 
        print("I don't now it") 

