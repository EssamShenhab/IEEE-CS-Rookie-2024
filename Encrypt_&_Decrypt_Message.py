def encrypt(s):
    key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"
    original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    encrypted = ""

    for char in s:
        if char in original:
            index = original.index(char)
            encrypted += key[index]
        else:
            encrypted += char

    return encrypted

def decrypt(s):
    key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"
    original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    decrypted = ""

    for char in s:
        if char in key:
            index = key.index(char)
            decrypted += original[index]
        else:
            decrypted += char

    return decrypted

Q = int(input())
S = input().strip()

if Q == 1:
    print(encrypt(S))
elif Q == 2:
    print(decrypt(S))
