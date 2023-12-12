def print_numbers(N):
    result = ""
    for i in range(1, N + 1):
        result += str(i) + " "
    return result.strip()

N = int(input().strip())

print(print_numbers(N))