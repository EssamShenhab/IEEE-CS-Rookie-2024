def calculate_equation_result(X, N):
    result = 0
    power = 0

    while power <= N:
        result += X**power
        power += 2

    return result

X, N = map(int, input().split())

result = calculate_equation_result(X, N)
result_1 = result - 1
print(result_1)