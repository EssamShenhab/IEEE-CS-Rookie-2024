def maximize_operations(N, A):
    max_operations = float('inf')  # Initialize to positive infinity
 
    for i in range(N):
        Ai = A[i]
 
        # Count the number of trailing zeros (even numbers)
        zeros_count = 0
        while Ai % 2 == 0:
            zeros_count += 1
            Ai //= 2
 
        # Update the maximum number of operations
        max_operations = min(max_operations, zeros_count)
 
    return max_operations
 
# Input
N = int(input())
A = list(map(int, input().split()))
 
# Output
result = maximize_operations(N, A)
print(result)
