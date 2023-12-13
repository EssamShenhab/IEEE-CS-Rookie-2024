from math import factorial

def ncr_npr(a, b):
    ncr = factorial(a) // (factorial(b) * factorial(a - b))
    npr = factorial(a) // factorial(a - b)
    return ncr, npr

# Input
a, b = map(int, input().split())

# Output
result = ncr_npr(a, b)
print(*result)