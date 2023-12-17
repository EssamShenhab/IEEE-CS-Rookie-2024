def max_path(start, end):
    if start == row - 1 and end == column - 1:
        return arr[start][end]
    elif start == row or end == column:
        return -1000000

    right = max_path(start, end + 1)
    down = max_path(start + 1, end)
    
    return arr[start][end] + max(right, down)

#Input
row, column = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(row)]

#Output
print(max_path(0, 0))