N = int(input())
S = input().strip()
 
max_size = 1
current_size = 1
 
for i in range(1, N):
    if S[i] != S[i-1]:
        current_size += 1
    else:
        current_size = 1
 
    if current_size > max_size:
        max_size = current_size
 
print(max_size)