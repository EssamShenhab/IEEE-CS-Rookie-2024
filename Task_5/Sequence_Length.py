def sequence_length(n):

    if n == 1:
        return 1
    #if n is even    
    elif n % 2 == 0:
        return 1 + sequence_length(n/2)
    #if n is odd    
    else:
        return 1 + sequence_length(3*n+1)
        
#Input        
n = int(input())
#Output
result = sequence_length(n)
print(result)