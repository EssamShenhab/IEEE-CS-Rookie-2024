def calculate_average(numbers, index, current_sum):
    if index == len(numbers):
        return current_sum / len(numbers)

    current_sum += numbers[index]
    return calculate_average(numbers, index + 1, current_sum)

# Input
N = int(input())
numbers = list(map(int, input().split()))

# Output
average = calculate_average(numbers, 0, 0)
print(f'{average:.6f}')
