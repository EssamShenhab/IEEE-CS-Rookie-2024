def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def is_palindrome(num):
    return str(num) == str(num)[::-1]

def count_divisors(num):
    divisors = 0
    for i in range(1, num + 1):
        if num % i == 0:
            divisors += 1
    return divisors

def solve_five_in_one(N, numbers):
    max_num = max(numbers)
    min_num = min(numbers)
    prime_count = sum(is_prime(num) for num in numbers)
    palindrome_count = sum(is_palindrome(num) for num in numbers)

    max_divisors_num = max(
        numbers,
        key=lambda num: (count_divisors(num), num),
    )

    print(f"The maximum number : {max_num}")
    print(f"The minimum number : {min_num}")
    print(f"The number of prime numbers : {prime_count}")
    print(f"The number of palindrome numbers : {palindrome_count}")
    print(f"The number that has the maximum number of divisors : {max_divisors_num}")

N = int(input())
numbers = list(map(int, input().split()))

solve_five_in_one(N, numbers)
