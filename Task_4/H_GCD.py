import math

# Function to find GCD
def find_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Function to find LCM
def find_lcm(a, b):
    return abs(a * b) // math.gcd(a, b)

# Input
a, b = map(int, input().split())

# Calculate GCD and LCM
gcd_result = find_gcd(a, b)
lcm_result = find_lcm(a, b)

# Output
print(gcd_result, lcm_result)
