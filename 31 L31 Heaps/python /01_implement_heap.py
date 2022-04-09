import heapq
 
class MaxHeap:
 
    # Initialize the max heap
    def __init__(self, data=None):
        if data is None:
            self.data = []
        else:
            # then store all the negative values of data 
            # then heapify the data to build the min heap
            # convert the arrays / list to heaps 
            self.data = [-i for i in data]
            heapq.heapify(self.data)
 
    # Push item onto max heap, maintaining the heap invariant
    # always push the negative values in the heaps 
    def push(self, item):
        heapq.heappush(self.data, -item)
 
    # Pop the largest item off the max heap, maintaining the heap invariant
    # pop the elment the invariant of the values
    def pop(self):
        return -heapq.heappop(self.data)
 
    # Pop and return the current largest value, and add the new item
    def replace(self, item):
        return heapq.heapreplace(self.data, -item)
 
    # Return the current largest value in the max heap
    # always return the top most element of three 
    def top(self):
        return -self.data[0]
 
 
if __name__ == '__main__':
 
    input = [7, 4, 6, 3, 9, 1]
 
    # build a max heap from all elements in the list
    pq = MaxHeap(input)
 
    # pop from max heap
    print(pq.pop())     # 9
    print(pq.pop())     # 7
    print(pq.pop())     # 6
 
    pq.push(10)
    pq.push(9)
 
    print(pq.pop())     # 10
    print(pq.pop()) 