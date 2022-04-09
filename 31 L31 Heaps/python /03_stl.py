"""
    Function for heapq module : 
    1. heapq.heappush(heap_list, item)
    2. heapq.heappop() 
    Both maintain the heap order property


"""

import heapq

# li = [5, 7, 9, 1, 3, 4]

# # converted in min heap
# heapq.heapify(li)

# print(li)
l1 = []

heapq.heappush(l1, -10)
heapq.heappush(l1, -1)

# Pop the elments the elements 
heapq.heappop(l1)

print(-l1[0])

