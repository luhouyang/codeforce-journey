def quartiles(arr):
    # Sort the input array
    arr.sort()
    n = len(arr)
    
    # Calculate Q2 (the median)
    if n % 2 == 0:
        Q2 = (arr[n//2 - 1] + arr[n//2]) / 2
    else:
        Q2 = arr[n//2]
    
    # Define lower and upper halves
    lower_half = arr[:n//2]
    upper_half = arr[(n//2 + 1):] if n % 2 != 0 else arr[n//2:]

    # Calculate Q1 (median of lower half)
    if len(lower_half) % 2 == 0:
        Q1 = (lower_half[len(lower_half)//2 - 1] + lower_half[len(lower_half)//2]) / 2
    else:
        Q1 = lower_half[len(lower_half)//2]

    # Calculate Q3 (median of upper half)
    if len(upper_half) % 2 == 0:
        Q3 = (upper_half[len(upper_half)//2 - 1] + upper_half[len(upper_half)//2]) / 2
    else:
        Q3 = upper_half[len(upper_half)//2]

    return [int(Q1), int(Q2), int(Q3)]

# Sample Input
arr = [3, 7, 8, 5, 12, 14, 21, 13, 18]
result = quartiles(arr)
print(result)  # Output: [6, 12, 16]
