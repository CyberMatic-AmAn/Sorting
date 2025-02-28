def bucket_sort(arr):
    if len(arr) == 0:
        return arr

    min_val, max_val = min(arr), max(arr)
    bucket_size = max(1, (max_val - min_val) // len(arr))
    buckets = [[] for _ in range((max_val - min_val) // bucket_size + 1)]

    for num in arr:
        buckets[(num - min_val) // bucket_size].append(num)

    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(sorted(bucket))

    return sorted_arr

