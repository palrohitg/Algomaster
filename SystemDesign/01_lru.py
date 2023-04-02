""" 
Generate the PR for Low level Design 


    LRU Cache : Store the data has the limited space data 
    Hashtable in python 


Approach: 
1. Used the hashtables
2. Used the Doubly linked list to implement 


Operation: 
put() --> key, value O(1)
get() --> key  O(1)

 head 
 tail 







"""

class Node:
    def __init__(self, k, v):
        self.key = k
        self.val = v
        self.prev = None
        self.next = None

class LRUCache:
    def __init__(self, capacity):
        self.capacity = capacity
        self.dic = dict()
        self.head = Node(0, 0)
        self.tail = Node(0, 0)
        self.head.next = self.tail
        self.tail.prev = self.head

    def get(self, key):
        if key in self.dic:
            n = self.dic[key]
            self._remove(n)
            self._add(n)
            return n.val
        return -1

    def set(self, key, value):
        if key in self.dic:
            self._remove(self.dic[key])
        n = Node(key, value)
        self._add(n)
        self.dic[key] = n
        if len(self.dic) > self.capacity:
            n = self.head.next
            self._remove(n)
            del self.dic[n.key]

    def _remove(self, node):
        p = node.prev
        n = node.next
        p.next = n
        n.prev = p

    def _add(self, node):
        p = self.tail.prev
        p.next = node
        self.tail.prev = node
        node.prev = p
        node.next = self.tail


from collections import OrderedDict
from re import S

od = OrderedDict()

od['a'] = 1
od['b'] = 1
od['c'] = 1
od['d'] = 1

print(od.popitem(last=False)) # stack perform 
print(od)
print(od)
