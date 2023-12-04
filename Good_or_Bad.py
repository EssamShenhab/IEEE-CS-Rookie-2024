def Good_or_Bad(s):
    if "010" in s or "101" in s:
        return "Good"
    else:
        return "Bad"

t = int(input())

for _ in range(t):
    s = input()

    result = Good_or_Bad(s)
    print(result)