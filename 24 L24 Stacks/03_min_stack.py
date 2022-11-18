class MinStack:
    
    def __init__(self):
        self.stack = [] 
        self.minElement = None 
    
    def push(self, value):
        if not self.stack:
            self.stack.append(value)
            self.minElement = value 
            return 
        elif(value < self.minElement):
            # insert a smaller value 
            self.stack.append(2*value - self.minElement)
            self.minElement = value
        else:
            self.stack.append(value)
            
    def pops(self):
        if not self.stack:
            print("stack is empty") 
            return 
        topElement = self.stack.pop()
        if (topElement < self.minElement):
            self.minElement = 2*self.minElement - topElement

    def top(self):
        if not self.stack:
            print("stack is empty") 
            return 
        try:
            print(self.stack)
            topElement = self.stack[-1] 
            if (topElement < self.minElement):
                print(self.minElement)
            else:
                print(topElement)
        except Exception as e:
            print(f"Error exception is occured {e}")
        
    def getMin(self):
        print(self.minElement)


minStack = MinStack() 
minStack.push(10)
minStack.push(5)
minStack.push(2)
minStack.push(20)
minStack.top()
minStack.pops()
minStack.pops()
minStack.top()
# minStack.getMin()