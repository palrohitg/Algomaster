class Stack:
    def __init__(self, size):
        self.arr = [None] * size
        self.capacity = size
        self.top = -1

    def push(self, val):
        if self.isFull():
            print('Stack Overflow!! Calling exit()…')
            exit(-1)

        print(f'Inserting {val} into the stack…')
        self.top = self.top + 1
        self.arr[self.top] = val

    def pop(self):
        # check for stack underflow
        if self.isEmpty():
            print('Stack Underflow!! Calling exit()…')
            exit(-1)

        print(f'Removing {self.peek()} from the stack')

        # decrease stack size by 1 and (optionally) return the popped element
        top = self.arr[self.top]
        self.top = self.top - 1 # decrement the top by one 
        return top

    # Function to return the top element of the stack
    def peek(self):
        if self.isEmpty():
            exit(-1)
        return self.arr[self.top]

    # Function to return the size of the stack
    def size(self):
        return self.top + 1

    # Function to check if the stack is empty or not
    def isEmpty(self):
        return self.size() == 0

    # Function to check if the stack is full or not
    def isFull(self):
        print(len(self.arr))
        return self.size() == self.capacity


if __name__ == '__main__':

    stack = Stack(3)

    stack.push(1)       # Inserting 1 in the stack
    stack.push(2)       # Inserting 2 in the stack

    stack.pop()         # removing the top element (2)
    stack.pop()         # removing the top element (1)

    stack.push(3)       # Inserting 3 in the stack

    print('Top element is', stack.peek())
    print('The stack size is', stack.size())

    stack.pop()         # removing the top element (3)

    # check if the stack is empty
    if stack.isEmpty():
        print('The stack is empty')
    else:
        print('The stack is not empty')
