def print_digits(num, index=0):
    global first
    if index == len(num):
        print()
        first = False
        return
    if first:
        print(" ", end="")
    first = True
    print(num[index], end="")
    index += 1
    print_digits(num, index)

def loop(cases):
    if cases == 0:
        return
    num = input()
    print_digits(num)
    loop(cases - 1)

first = False
loop(int(input()))