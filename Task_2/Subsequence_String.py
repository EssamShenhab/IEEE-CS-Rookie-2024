def has_hello_subsequence(s):
    target = "hello"
    index = 0

    for char in s:
        if char == target[index]:
            index += 1
            if index == len(target):
                return "YES"

    return "NO"

s = input().strip()
print(has_hello_subsequence(s))