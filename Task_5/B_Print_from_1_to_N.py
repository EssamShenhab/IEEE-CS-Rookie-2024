def print_numbers(N, i=1):
    if i <= N:
        print(i)
        print_numbers(N, i+1)
    
#Input
N = int(input())
#Output
print_numbers(N)
