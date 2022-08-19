# NLogN Code
new_element = [399, 12, 1239]
new_element.sort(reverse=True)
print(new_element[1])

"""
    * Create a MinHeaps: 
    1. Insert all the elements in heaps for size of k. 
    2. If top element is smaller than current element than replace it. 
       else ignore the element. 
    3. Get the top most element is the answers.
"""
# Python3 program to demonstrate working of heapq

from heapq import heapify, heappush, heappop

# Creating empty heap
heap = []
heapify(heap)

# Adding items to the heap using heappush function
heappush(heap, 10)
heappush(heap, 30)
heappush(heap, 20)
heappush(heap, 400)

# printing the value of minimum element
print("Head value of heap : "+str(heap[0]))

# printing the elements of the heap
print("The heap elements : ")
for i in heap:
	print(i, end = ' ')
print("\n")

element = heappop(heap)

# printing the elements of the heap
print("The heap elements : ")
for i in heap:
	print(i, end = ' ')

## Easiest Way to convert a Max Heaps to MinHeaps use the -ve sign to change the values.
import heapq
heap = []
heapq.heappush(heap, 1*(-1))
heapq.heappush(heap, 10*(-1))
heapq.heappush(heap, 20*(-1))
print(heap)

# def myFunc(e):
#   return len(e)
#
# cars = ['Ford', 'Mitsubishi', 'BMW', 'VW']
#
# cars.sort(reverse=True, key=myFunc)
#
# print(cars)