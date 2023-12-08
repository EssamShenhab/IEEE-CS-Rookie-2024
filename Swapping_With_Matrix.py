def swap_matrix(matrix, X, Y):
    matrix[X-1], matrix[Y-1] = matrix[Y-1], matrix[X-1]

    for i in range(len(matrix)):
        matrix[i][X-1], matrix[i][Y-1] = matrix[i][Y-1], matrix[i][X-1]

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

N, X, Y = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(N)]

swap_matrix(matrix, X, Y)

print_matrix(matrix)
