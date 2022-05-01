import sys 
class Stack:
    def __init__(self):
        self.arr = list()
        self.current_size = 0  
        self.min_element = sys.maxsize
    
    def push(self, value):
        self.arr.append(value)
        self.current_size += 1 

    def isEmpty(self):
        return len(self.arr) == 0

    def pop(self):
        if self.isEmpty():
            print("Stack is empty")
            return 
        self.arr.pop()
        self.current_size -= 1 

    def top(self):
        if self.isEmpty():
            print("stack is empty")
            return 

        return self.arr[self.current_size - 1]

    def get_min(self):
        # O(N) time Min heaps used 
        for i in range(0, self.current_size):
            if (self.arr[i] < self.min_element):
                self.min_element = self.arr[i]
        print("Min elment is ", self.min_element)
        return self.min_element
        

if __name__ == "__main__":
    s = Stack()
    s.pop()
    s.push(10)
    s.push(11)
    s.get_min()
    s.pop()
    print(s.top())

