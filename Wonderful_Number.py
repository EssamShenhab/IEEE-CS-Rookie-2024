def palindrome_num(s):
    return s == s[::-1]
    
def wonderful_num(n):
    if n % 2 == 0:
        return "NO"
        
    binary_representation = bin(n)[2:]
    if palindrome_num(binary_representation):
        return "YES"
    else:
        return "NO"
        
n = int(input())

result = wonderful_num(n)
print(result)
