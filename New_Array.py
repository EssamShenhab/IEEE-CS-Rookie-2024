def concatenate_arrays(n, array_a, array_b):

    array_c = array_b + array_a
    
    print(' '.join(map(str, array_c)))

n = int(input())
array_a = list(map(int, input().split()))
array_b = list(map(int, input().split()))

concatenate_arrays(n, array_a, array_b)
