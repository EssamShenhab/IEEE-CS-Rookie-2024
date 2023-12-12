def shift_right(arr, x):
    n = len(arr)
    x = x % n  
    
    shifted_arr = arr[-x:] + arr[:-x]

    return shifted_arr

n, x = map(int, input().split())
arr = list(map(int, input().split()))

result = shift_right(arr, x)
print(*result)