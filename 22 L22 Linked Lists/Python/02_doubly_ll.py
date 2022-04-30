"""
    doubly linked list implementation: 
"""

class Node:
    def __init__(self, data=None, next=None, prev=None):
        self.data = data 
        self.next = next
        self.prev = prev 
    
class doublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None 
        self.count = 0

    def append_item(self, data):
        # append item to linked list 
        new_item = Node(data, None, None)
        if self.head is None:
            self.head = new_item
            self.tail = self.head 
        else:
            new_item.prev = self.tail
            self.tail.next = new_item
            self.tail = new_item
        self.count += 1
    
    def iter(self):
        current = self.head 
        while current:
            item_val = current.data 
            current = current.next 
            yield item_val
    
    def _iter_backward(self):
        current = self.tail
        while current:
            item_value = current.data
            current = current.prev 
            yield item_value

    def print_forward(self):
        for node in self.iter():
            print(node)

    def print_back(self):
        for node in self._iter_backward():
            print(node)

items = doublyLinkedList()
items.append_item(10)
items.append_item(20)
items.append_item(30)
items.append_item(40)

items.print_forward()
items.print_back()