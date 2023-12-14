import sys
sys.setrecursionlimit(35)
 
def fibonacci(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
 
# Input
n = int(input())
 
# Output
result = fibonacci(n)
print(result)