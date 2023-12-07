def is_prime(N):
    if N <= 1:
        return False
    for i in range(2, int(N**0.5) + 1):
        if N % i == 0:
            return False
    return True
 
def prime_function(t, test_cases):
    results = []
    for N in test_cases:
        if is_prime(N):
            results.append("YES")
        else:
            results.append("NO")
    return results
 
t = int(input())
test_cases = [int(input()) for _ in range(t)]
 
results = prime_function(t, test_cases)
for result in results:
    print(result)
