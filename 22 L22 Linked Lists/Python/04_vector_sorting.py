list = [[1, 10],[20, 25], [2, 5]]
print(list)
# Sorted based on the logn times
list.sort(key=lambda list: list[1])
print(list)

# intervals.sort(key=lambda intervals: intervals[0])