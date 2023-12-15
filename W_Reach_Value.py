def can_reach_value(current_value, target_value):
    
    if current_value == target_value:
        return "YES"
    
    if current_value > target_value:
        return "NO"
    
    result_10 = can_reach_value(current_value * 10, target_value)
    result_20 = can_reach_value(current_value * 20, target_value)
    
    if result_10 == "YES" or result_20 == "YES":
        return "YES"
    
    return "NO"

#the number of test cases input
T = int(input())

for _ in range(T):
    #the target value input
    N = int(input())
    
    result = can_reach_value(1, N)
    print(result)