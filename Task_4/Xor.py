def calculate_F( A, B, Q ):
    if Q == 1:
        return A
    elif Q == 2:
        return B
    else:  
        return calculate_F( A, B, Q - 1 ) ^ calculate_F( A, B, Q - 2 )
    
A, B, Q = map(int, input().split())

result = calculate_F( A, B, Q )
print(result)