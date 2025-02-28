def counting_sort(arr):
    max_val = max(arr)
    count = [0] * (max_val + 1)
    
    for num in arr:
        count[num] += 1
    
    sorted_arr = []
    for i, freq in enumerate(count):
        sorted_arr.extend([i] * freq)

    return sorted_arr

